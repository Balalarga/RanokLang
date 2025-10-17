#include "RanokProcessor.h"

#include <fstream>
#include "ANTLRInputStream.h"
#include "RanokLexer.h"
#include "RanokListener.h"
#include "RanokParser.h"


std::expected<RanokProcessor, std::string> RanokProcessor::FromFile(const std::filesystem::path& path) {
	std::ifstream ifs(path);
	if(!ifs)
		return std::unexpected("Cannot open file");

	antlr4::ANTLRInputStream input(ifs);
	RanokLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);

	RanokParser parser(&tokens);
	auto* tree = parser.main();

	return RanokProcessor();
}

std::expected<RanokProcessor, std::string> RanokProcessor::FromText(const std::string& code) {
	antlr4::ANTLRInputStream input(code);
	RanokLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);

	RanokParser parser(&tokens);
	auto* tree = parser.main();

	return RanokProcessor();
}
