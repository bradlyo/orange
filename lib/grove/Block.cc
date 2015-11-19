/*
** Copyright 2014-2015 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#include <grove/Block.h>
#include <grove/Named.h>
#include <grove/Genericable.h>

std::vector<ASTNode *> Block::getStatements() const
{
	return m_statements;
}

Named* Block::getNamed(std::string name, const ASTNode *limit) const
{
	return getNamed(name, nullptr, limit);
}

Named* Block::getNamed(std::string name, Type* type,
					   const ASTNode *limit) const
{
	for (auto child : getChildren())
	{
		if (child == limit)
		{
			break;
		}
		
		if (child->is<Named *>())
		{
			auto named = child->as<Named *>();
			
			if (named->matches(name, type))
			{
				if (named->is<Genericable *>() &&
					named->as<Genericable *>()->isGeneric())
				{
					auto generic = named->as<Genericable *>();
					if (generic->hasInstance(type))
					{
						return generic->findInstance(type)->as<Named *>();
					}
					else
					{
						return generic->createInstance(type)->as<Named *>();
					}
				}
				
				return named;
			}
		}
	}
	
	return nullptr;
}

void Block::addStatement(ASTNode *statement)
{
	if (statement == nullptr)
	{
		throw std::invalid_argument("statement cannot be null.");
	}
	
	m_statements.push_back(statement);
	addChild(statement, true);
}

void Block::buildStatements()
{
	for (auto stmt : getStatements())
	{
		stmt->build();
		
		if (stmt->is<Statement *>() && stmt->as<Statement *>()->isTerminator())
		{
			break;
		}
	}
}

void Block::copyStatements(const Block *orig)
{
	for (auto stmt : orig->getStatements())
	{
		addStatement(stmt->copy());
	}
}

Block::Block()
: Statement()
{
	// Do nothing
}

Block::Block(Module* module)
: Statement(module)
{
	// Do nothing 
}