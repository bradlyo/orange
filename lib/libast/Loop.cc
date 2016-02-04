/*
** Copyright 2014-2016 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#include <libast/Loop.h>
#include <libast/Expression.h>
#include <libast/Function.h>
#include <libast/Module.h>
#include <libast/ReturnStmt.h>

#include <libast/types/Type.h>

#include <libast/exceptions/code_error.h>

#include <util/assertions.h>
#include <util/copy.h>

#include <llvm/IR/IRBuilder.h>

ASTNode* Loop::copyIfNonNull(ASTNode *node) const
{
	if (node == nullptr)
	{
		return nullptr;
	}
	
	return node->copy();
}

ASTNode* Loop::copy() const
{
	return new Loop(*this);
}

std::vector<ObjectBase**> Loop::getMemberNodes()
{
	auto list = Block::getMemberNodes();
	list.insert(list.end(), {
		(ObjectBase **)&m_condition,
		(ObjectBase **)&m_afterthought
	});
	return list;
}

std::vector<std::vector<ObjectBase *>*> Loop::getMemberLists()
{
	auto list = Block::getMemberLists();
	list.insert(list.end(), {
		(std::vector<ObjectBase *>*)&m_initializers
	});
	return list;
}

std::vector<ASTNode*> Loop::getInitializers() const
{
	return m_initializers;
}

Expression* Loop::getCondition() const
{
	return m_condition;
}

ASTNode* Loop::getAfterthought() const
{
	return m_afterthought;
}

void Loop::setInitializers(std::vector<ASTNode *> initializers)
{
	for (auto initializer : m_initializers)
	{
		removeChild(initializer);
	}
		
	m_initializers = initializers;
	
	for (auto initializer : initializers)
	{
		addChild(initializer, true);
	}
}

void Loop::setCondition(Expression *condition)
{
	if (m_condition)
	{
		removeChild(m_condition);
	}
	
	m_condition = condition;
	addChild(m_condition);
}

void Loop::setAfterthought(ASTNode *afterthought)
{
	if (m_afterthought)
	{
		removeChild(m_afterthought);
	}
	
	m_afterthought = afterthought;
	addChild(m_afterthought);
}

llvm::BasicBlock* Loop::getConditionBlock() const
{
	return m_condition_block;
}

llvm::BasicBlock* Loop::getBodyBlock() const
{
	return m_body_block;
}

llvm::BasicBlock* Loop::getAfterthoughtBlock() const
{
	return m_afterthought_block;
}

llvm::BasicBlock* Loop::getContinueBlock() const
{
	return m_continue_block;
}

bool Loop::isPostCheck() const
{
	return m_post_check;
}

void Loop::resolve()
{
	if (getCondition() != nullptr)
	{
		auto condition_ty = getCondition()->getType();
    	assertExists(condition_ty, "condition has no type");
		
    	if (condition_ty->isBoolTy() == false)
    	{
			throw code_error(getCondition(), [condition_ty]() -> std::string
				{
					std::stringstream ss;
					ss << "condition of loop is " << condition_ty->getString()
					   << ", expected bool";
					
					return ss.str();
				});
    	}
	}
}

void Loop::build()
{
	// First, build our initializers if there are some.
	if (getInitializers().size() != 0)
	{
		for (auto initializer : getInitializers())
		{
			getModule()->build(initializer);
		}
	}
	
	// Get the parent function
	auto parent_func = findParent<Function *>();
	auto llvm_func = parent_func->getLLVMFunction();
	auto& ctx = getModule()->getLLVMContext();
	
	// Now, create our blocks.
	if (getCondition() != nullptr)
	{
		m_condition_block = llvm::BasicBlock::Create(ctx, "condition", llvm_func,
													 parent_func->getExit());
	}

	// We will always have a body of the loop.
	m_body_block = llvm::BasicBlock::Create(ctx, "body", llvm_func,
											parent_func->getExit());
	
	if (getAfterthought() != nullptr)
	{
		m_afterthought_block = llvm::BasicBlock::Create(ctx, "afterthought",
														llvm_func,
														parent_func->getExit());
	}
	
	if (isTerminator() == false)
	{
		m_continue_block = llvm::BasicBlock::Create(ctx, "continue", llvm_func,
													parent_func->getExit());
	}
	
	// If we're a pre-check and have a condition, go to the condition.
	// Otherwise, go to our body.
	if (isPostCheck() == false && getCondition())
	{
		IRBuilder()->CreateBr(getConditionBlock());
	}
	else
	{
		IRBuilder()->CreateBr(getBodyBlock());
	}
	
	// Next, we'll create the condition section.
	if (getCondition())
	{
		IRBuilder()->SetInsertPoint(getConditionBlock());
		getModule()->build(getCondition());
		
		auto vCondition = getCondition()->getValue();
		assertExists(vCondition, "Condition generated no value!");
	
		// continue_block will always be non-null when there's a condition.
		IRBuilder()->CreateCondBr(vCondition, getBodyBlock(),
								  getContinueBlock());
	}
	
	// Next, we'll generate our body.
	IRBuilder()->SetInsertPoint(getBodyBlock());
	buildStatements();
	
	// If we're not a terminator, go to either our m_afterthought block
	// or our body block, depending on which exists.
	if (Block::isTerminator() == false)
	{
		if (getAfterthoughtBlock() != nullptr)
		{
			IRBuilder()->CreateBr(getAfterthoughtBlock());
		}
		else if (getConditionBlock() != nullptr)
		{
			IRBuilder()->CreateBr(getConditionBlock());
		}
		else
		{
			IRBuilder()->CreateBr(getBodyBlock());
		}
	}
	
	// Finally, generate our afterthought block.
	if (getAfterthought() != nullptr)
	{
		IRBuilder()->SetInsertPoint(getAfterthoughtBlock());
		getAfterthought()->build();
		
		if (getCondition() != nullptr)
		{
			IRBuilder()->CreateBr(getConditionBlock());
		}
		else
		{
			IRBuilder()->CreateBr(getBodyBlock());
		}
	}
	
	if (isTerminator() == false)
	{
		IRBuilder()->SetInsertPoint(getContinueBlock());
	}
}

bool Loop::isTerminator() const
{
	if (getCondition() != nullptr)
	{
		return false;
	}
	
	// Terminators of loops work slightly differently:
	// A loop is a terminator only if it is guaranteed to return from a
	// function. breaks and continue statements are terminators, but do not
	// interrupt a function.
	for (auto stmt : getStatements())
	{
		if (stmt->is<ReturnStmt *>())
		{
			return true;
		}
	}
	
	return false;
}

Loop::Loop(std::vector<ASTNode*> initializers, Expression* condition,
		   ASTNode* afterthought, bool postCheck)
: Block()
{
	m_initializers = initializers;
	m_condition = condition;
	m_afterthought = afterthought;
	m_post_check = postCheck;
	
	for (auto initializer : m_initializers)
	{
		addChild(initializer, true);
	}
	
	addChild(m_condition);
	addChild(m_afterthought);
}

Loop::Loop(const Loop& other)
{
	m_initializers = copyVector(other.getInitializers());
	
	for (auto initializer : m_initializers)
	{
		addChild(initializer, true);
	}
	
	m_condition = (Expression *)copyIfNonNull(other.m_condition);
	m_afterthought = (Expression *)copyIfNonNull(other.m_afterthought);
	
	addChild(m_condition);
	addChild(m_afterthought);
	
	copyStatements(&other);
	other.defineCopy(this);
}