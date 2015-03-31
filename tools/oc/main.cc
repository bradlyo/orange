#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "gen/AST.h"

extern FILE* yyin;
extern int yylex();

extern Block *globalBlock;
extern int yyparse();


int main(int argc, char **argv) {
	if (argc < 2) {
		printf("usage: %s [filename]\n", argv[0]);
		return 1;
	}

	yyin = fopen(argv[1], "r");
	// while (yylex() != 0);

	yyparse();

	if (globalBlock == nullptr) {
		printf("an issue occured during parsing...\n");
		return 1;
	}

	CodeGenerator::init();
	CodeGenerator::Generate(globalBlock);


	return 0;
}
