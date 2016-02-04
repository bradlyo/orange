/*
** Copyright 2014-2016 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#include <libast/MemberVarDecl.h>
#include <libast/ClassDecl.h>
#include <libast/Expression.h>

#include <libast/types/Type.h>

#include <util/assertions.h>

bool MemberVarDecl::usableFrom(const ASTNode *from) const
{
	if (getProtectionLevel() == ProtectionLevel::PROTECTION_PUBLIC)
	{
		return true;
	}
	
	auto parent_class = findParent<ClassDecl*>();
	return (parent_class == from->findParent<ClassDecl*>());
}

ProtectionLevel MemberVarDecl::defaultProtectionLevel() const
{
	return ProtectionLevel::PROTECTION_PUBLIC;
}

ASTNode* MemberVarDecl::copy() const
{
	return new MemberVarDecl(*this);
}

llvm::Value* MemberVarDecl::getValue() const
{
	if (getStatic())
	{
		return VarDecl::getValue();
	}
	
	throw fatal_error("MemberVarDecl::getValue used directly!");
}

llvm::Value* MemberVarDecl::getPointer() const
{
	if (getStatic())
	{
		return VarDecl::getPointer();
	}
	
	throw fatal_error("MemberVarDecl::getPointer used directly!");
}

unsigned int MemberVarDecl::getOffset() const
{
	auto parentClass = findParent<ClassDecl *>();
	assertExists(parentClass, "couldn't find a parent class for "
				 "MemberVarDecl");
	
	auto&& members = parentClass->getMembers();
	auto it = std::find(members.begin(), members.end(), this);

	if (it == members.end())
	{
		throw fatal_error("couldn't find member's offset in parent");
	}
	
	int offset = (unsigned int)std::distance(members.begin(), it);
	
	// If the parent class is a child of another class, add one to the
	// offset to account for the member.
	if (parentClass->getParentClass() != nullptr)
	{
		offset++;
	}
	
	return offset;
}

void MemberVarDecl::build()
{
	if (getStatic())
	{
		VarDecl::build();
	}
}

MemberVarDecl::MemberVarDecl(const Orange::Type* type, OString name,
							 Expression* expression)
: VarDecl(type, name, expression)
{
	// Do nothing.
}

MemberVarDecl::MemberVarDecl(const MemberVarDecl& other)
: VarDecl(other)
{
	// Do nothing.
}