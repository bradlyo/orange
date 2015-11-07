/*
** Copyright 2014-2015 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#include <stdexcept>

#include <grove/Module.h>

void yyerror(Module* mod, const char* str)
{
	throw std::runtime_error(str);
}