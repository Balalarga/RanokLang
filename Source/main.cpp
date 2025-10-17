#include <filesystem>
#include <iostream>

#include "ANTLRInputStream.h"
#include "RanokLexer.h"
#include "RanokListener.h"
#include "RanokParser.h"


int main() {
	std::filesystem::path examplesDir(RNL_EXAMPLES_DIR);
	examplesDir /= "Example.rnl";
	std::ifstream ifs(examplesDir);
	if(!ifs)
		return -1;

	antlr4::ANTLRInputStream input(ifs);
	RanokLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);

	RanokParser parser(&tokens);
	RanokParser::MainContext* tree = parser.main();

	Interpreter visitor;
	tree->accept(&visitor);

	return 0;
}
