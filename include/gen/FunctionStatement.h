#ifndef __FUNCTION_STATEMENT_H__
#define __FUNCTION_STATEMENT_H__
#include "AST.h"
#include "ArgExpr.h"
#include "Block.h"

class FunctionStatement : public Statement {
public:
	virtual std::string getClass() { return "FunctionStatement"; }

	Value* Codegen();

	std::string name;
	ArgList *args;
	Block *body;

	virtual std::string string() {
		std::stringstream ss;
		ss << name << "( ";
		for (unsigned int i = 0; i < args->size(); i++) {
			ss << (*args)[i]->string() << " ";
			if (i + 1 != args->size())
				ss << ", ";
		}
		ss << "):\n";

		for (Statement *s : body->statements) {
			ss << "\t" << s->string() << std::endl;
		}

		return ss.str();
	}

	FunctionStatement(std::string* name, ArgList *args, Block *body);
};

#endif 