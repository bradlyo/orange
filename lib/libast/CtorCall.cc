/*
** Copyright 2014-2016 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#include <libast/CtorCall.h>
#include <libast/Constructor.h>
#include <libast/ClassDecl.h>
#include <libast/Module.h>

#include <libast/types/Type.h>
#include <libast/types/FunctionType.h>
#include <libast/types/VarType.h>

#include <libast/exceptions/undefined_error.h>

#include <util/assertions.h>
#include <util/copy.h>

#include <llvm/IR/IRBuilder.h>

ASTNode* CtorCall::copy() const
{
	return new CtorCall(*this);
}

std::vector<ObjectBase**> CtorCall::getMemberNodes()
{
	auto list = defMemberNodes();
	list.insert(list.end(), {
		(ObjectBase **)&m_this_param
	});
	return list;
}

std::vector<std::vector<ObjectBase *>*> CtorCall::getMemberLists()
{
	return defMemberLists();
}

bool CtorCall::hasPointer() const
{
	return true;
}

llvm::Value* CtorCall::getPointer() const
{
	return m_value;
}

llvm::Value* CtorCall::getValue() const
{
	return IRBuilder()->CreateLoad(m_value);
}

bool CtorCall::transferrable() const
{
	return true;
}

void CtorCall::findNode()
{
	SearchSettings settings;
	settings.forceTypeMatch = false;
	settings.createGeneric = true;
	settings.searchWholeTree = true;
	settings.includeLimit = false;
	
	settings.filter = [](Named* named)
	{
		return named->is<Constructor *>() &&
			named->as<Constructor *>()->getClass()->isInstance() == false;
	};
	
	auto def = findNamed(getName(), expectedFunctionTy(), settings);
	if (def == nullptr)
	{
		auto name = getName();
		throw undefined_error(&name, getName());
	}
	
	// Determine type
	setExpr(def->as<ASTNode *>());
}

ClassDecl* CtorCall::findClass() const
{
	SearchSettings settings;
	settings.createGeneric = false;
	settings.forceTypeMatch = false;
	settings.includeLimit = false;
	settings.searchWholeTree = true;
	
	settings.filter = [](Named* named)
	{
		return named->is<ClassDecl *>() &&
			named->as<ClassDecl *>()->isInstance() == false;
	};
	
	auto named = findNamed(getName(), nullptr, settings);
	if (named == nullptr)
	{
		throw fatal_error("Could not find class");
	}
	
	return named->as<ClassDecl *>();
}

void CtorCall::resolve()
{
	auto the_class = findClass();
	auto class_ty = the_class->getType();
	assertExists(class_ty, "Class has no defined type");
	
	// We need to temporarily set a type for when we're resolving the
	// function call.
	m_this_param->setType(class_ty->getPointerTo());
	
	setType(the_class->getType());
	
	FunctionCall::resolve();
	
	if (getExpr()->is<Constructor *>() == false)
	{
		throw fatal_error("CtorCall not looking at a Constructor!");
	}

	// Re-get the_class as getExpr may be pointing to a generic instance
	// now.
	the_class = getExpr()->as<Constructor *>()->getClass();
	m_this_param->setType(the_class->getType()->getPointerTo());
	
	setType(the_class->getType());
}

void CtorCall::build()
{
	auto val = IRBuilder()->CreateAlloca(getType()->getLLVMType());
	m_this_param->setValue(val);
	
	FunctionCall::build();
	
	setValue(val);
}

CtorCall::CtorCall(OString name, std::vector<Expression *> args)
: FunctionCall(name, args)
{
	m_this_param = new Expression();
	
	if (args.size() == 0)
	{
		addChild(m_this_param);
	}
	else
	{
		addChild(m_this_param, m_args.at(0), 0);
	}
	
	m_args.insert(m_args.begin(), m_this_param);
}

CtorCall::CtorCall(const CtorCall& other)
: FunctionCall(other.getName(), std::vector<Expression *>())
{
	for (auto arg : other.getArgs())
	{
		if (arg == other.m_this_param)
		{
			continue;
		}
		
		addArgument((Expression *)arg->copy());
	}
	
	m_this_param = new Expression();
	
	if (getArgs().size() == 0)
	{
		addChild(m_this_param);
	}
	else
	{
		addChild(m_this_param, m_args.at(0), 0);
	}
	
	m_args.insert(m_args.begin(), m_this_param);
	
	other.defineCopy(this);
}