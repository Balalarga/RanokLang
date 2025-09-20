#include <iostream>

#include "ANTLRInputStream.h"
#include "Grammar/Generated/RanokLexer.h"
#include "Grammar/Generated/RanokParser.h"

int main() {

	antlr4::ANTLRInputStream input("1+a");
	RanokLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);

	RanokParser parser(&tokens);
	auto* tree = parser.prog();

	auto s = tree->toInfoString(&parser);
	std::cout << "Parse Tree: " << s << std::endl;
	return 0;
}
