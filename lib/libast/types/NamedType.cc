/*
** Copyright 2014-2016 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#include <libast/types/NamedType.h>

#include <libast/exceptions/fatal_error.h>

Orange::Type* NamedType::getType() const
{
	return m_type;
}

std::string NamedType::getName() const
{
	return m_name;
}

NamedType::NamedType(std::string name, Orange::Type* type)
{
	if (name == "")
	{
		throw fatal_error("name was empty");
	}

	if (type == nullptr)
	{
		throw fatal_error("type was null");
	}

	m_name = name;
	m_type = type;
}