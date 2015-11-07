/*
** Copyright 2014-2015 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#pragma once

#include <vector>
#include "Statement.h"

/**
 * Block is the base class for any element that holds a list of statements.
 */
class Block : public Statement {
private:
	std::vector<ASTNode *> m_statements;
public:
	std::vector<ASTNode *> getStatements() const;
	
	void addStatement(ASTNode* statement);
};
