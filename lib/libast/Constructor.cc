/*
** Copyright 2014-2016 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#include <libast/Constructor.h>
#include <libast/ClassMethod.h>
#include <libast/ClassDecl.h>
#include <libast/Parameter.h>
#include <libast/Module.h>

#include <libast/types/Type.h>

#include <util/assertions.h>
#include <util/copy.h>

ClassDecl* Constructor::getClass() const
{
	return m_class;
}

ClassMethod* Constructor::getMethod() const
{
	return m_method;
}

ASTNode* Constructor::copy() const
{
	return new Constructor(*this);
}

bool Constructor::isGeneric() const
{
	return Function::isGeneric() || m_class->isGeneric();
}

std::vector<ObjectBase**> Constructor::getMemberNodes()
{
	return defMemberNodes();
}

std::vector<std::vector<ObjectBase *>*> Constructor::getMemberLists()
{
	return defMemberLists();
}

void Constructor::findDependencies()
{
	addDependency(m_method);
	
	Function::findDependencies();
}

Genericable* Constructor::createInstance(const Orange::Type *type)
{
	if (getClass()->isGeneric() && getMethod() == nullptr)
	{
		throw fatal_error("Generic class can't use a default constructor");
	}
	
	// Get the class and method to operate on.
	auto operating_class = getClass();
	auto operating_method = getMethod();
	
	if (getClass()->isGeneric())
	{
		getModule()->beginCopy();
		
		// If the class is generic, we need to create an instance of the
		// class and then get the operating method from that instance.
		
		// Don't pass in a type for creating an instance of a class;
		// it will always set var members to FutureType.
		auto inst = getClass()->createInstance(nullptr);
		operating_class = inst->as<ClassDecl *>();
		
		operating_method =
			getModule()->getCopy(operating_method)->as<ClassMethod *>();
		
		getModule()->endCopy();
	}
	
	assertExists(operating_class, "no class to clone");
	assertExists(operating_method, "no method to clone");

	if (operating_method->getClass()->isGeneric())
	{
		throw fatal_error("Operating Method's class is still generic");
	}
	
	auto cloned_method = operating_method;
	
	if (operating_method->isGeneric())
	{
		// Now we can create an instance of the method.
		cloned_method =
			operating_method->createInstance(type)->as<ClassMethod*>();
	}
	
	// We need to resolve the method followed by the class itself so we
	// can get the appropriate Constructor.
	// It's ok if operating_class isn't a generic instance; it will have
	// already been resolved by this point.
	getModule()->process(cloned_method);
	
	// Finally, get the constructor from the operting class. If one doesn't
	// exist, it will be created.
	auto cloned_ctor = operating_class->getCtorForMethod(cloned_method);
	cloned_ctor->m_instance_of = this;
	m_instances.push_back(cloned_ctor);
	
	getModule()->process(operating_class);
	
	
	return cloned_ctor;
}

void Constructor::build()
{
	if (isGeneric())
	{
		return;
	}
	
	Function::build();
}

Constructor::Constructor(ClassDecl* theClass, ClassMethod* method,
						 OString name, std::vector<Parameter *> params)
: Function(name, params)
{
	assertExists(theClass, "Constructor created with no class");
	m_class = theClass;
	m_method = method;
}

Constructor::Constructor(const Constructor& other)
: Function(other.m_name, copyVector(other.getParams()))
{
	m_class = other.getClass();
	
	other.defineCopy(this);
}