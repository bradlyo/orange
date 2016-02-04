/*
** Copyright 2014-2016 Robert Fratto. See the LICENSE.txt file at the top-level
** directory of this distribution.
**
** Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
** may not be copied, modified, or distributed except according to those terms.
*/

#pragma once

#include "Type.h"

namespace Orange { class FloatType; }

class Orange::FloatType : public Orange::Type
{
protected:
	FloatType(bool isConst);
public:
	virtual std::string getString() const override;
	virtual std::string getSignature() const override;
	
	virtual bool isPODTy() const override;
	virtual bool isFloatTy() const override;
	virtual bool isFloatingPointTy() const override;
	
	virtual BasicType PODTy() const override;
	
	virtual Type* getConst() const override;
	
	static FloatType* get(Module* mod, bool isConst = false);
};