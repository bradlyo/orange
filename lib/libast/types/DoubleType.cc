/*
** Copyright 2014-2016 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#include <libast/types/DoubleType.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Instruction.h>

#include <libast/types/UIntType.h>
#include <libast/types/IntType.h>
#include <libast/types/FloatType.h>

Orange::DoubleType::DoubleType(bool isConst)
: Type(isConst)
{
	m_type = llvm::Type::getDoubleTy(*m_context);

	defineCast(typeid(UIntType), llvm::Instruction::CastOps::FPToUI);
	defineCast(typeid(IntType), llvm::Instruction::CastOps::FPToSI);
	defineCast(typeid(FloatType), llvm::Instruction::CastOps::FPTrunc);
}

std::string Orange::DoubleType::getString() const
{
	std::stringstream ss;
	
	if (isConst())
	{
		ss << "const ";
	}
	
	ss << "double";
	return ss.str();
}

std::string Orange::DoubleType::getSignature() const
{
	std::stringstream ss;
	
	if (isConst())
	{
		ss << getConstIdentifier();
	}
	
	ss << "F";
	
	return ss.str();
}

bool Orange::DoubleType::isPODTy() const
{
	return true;
}

bool Orange::DoubleType::isDoubleTy() const
{
	return true;
}

bool Orange::DoubleType::isFloatingPointTy() const
{
	return true;
}

BasicType Orange::DoubleType::PODTy() const
{
	return TYDOUBLE;
}

Orange::Type* Orange::DoubleType::getConst() const
{
	return DoubleType::get(getModule(), true);
}

Orange::DoubleType* Orange::DoubleType::get(Module* mod, bool isConst)
{
	std::stringstream ss;
	
	if (isConst)
	{
		ss << getConstIdentifier();
	}
	
	ss << "F";
	
	auto defined = getDefined(mod, ss.str());
	if (defined != nullptr)
	{
		return defined->as<DoubleType*>();
	}

	DoubleType* ty = new DoubleType(isConst);
	define(mod, ss.str(), ty);

	return ty;
}