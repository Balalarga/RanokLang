
// Generated from D:/Projects/RanokLang/Grammar/Ranok.g4 by ANTLR 4.13.2


#include "RanokLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct RanokLexerStaticData final {
  RanokLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RanokLexerStaticData(const RanokLexerStaticData&) = delete;
  RanokLexerStaticData(RanokLexerStaticData&&) = delete;
  RanokLexerStaticData& operator=(const RanokLexerStaticData&) = delete;
  RanokLexerStaticData& operator=(RanokLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ranoklexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RanokLexerStaticData> ranoklexerLexerStaticData = nullptr;

void ranoklexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (ranoklexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(ranoklexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RanokLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "Int", "Float", "Id", "NewLine"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'&&'", "'||'", "'*'", "'+'", "'-'", "'/'", "'&'", "'!'", "'('", 
      "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "Int", "Float", "Id", 
      "NewLine"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,14,80,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,
  	1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,
  	8,1,8,1,9,1,9,1,10,4,10,53,8,10,11,10,12,10,54,1,11,4,11,58,8,11,11,11,
  	12,11,59,1,11,1,11,4,11,64,8,11,11,11,12,11,65,1,12,1,12,4,12,70,8,12,
  	11,12,12,12,71,1,13,4,13,75,8,13,11,13,12,13,76,1,13,1,13,0,0,14,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,1,0,
  	4,1,0,48,57,2,0,65,90,97,122,3,0,48,57,65,90,97,122,2,0,10,10,13,13,84,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,1,29,1,0,0,0,3,32,1,0,0,0,5,35,
  	1,0,0,0,7,37,1,0,0,0,9,39,1,0,0,0,11,41,1,0,0,0,13,43,1,0,0,0,15,45,1,
  	0,0,0,17,47,1,0,0,0,19,49,1,0,0,0,21,52,1,0,0,0,23,57,1,0,0,0,25,67,1,
  	0,0,0,27,74,1,0,0,0,29,30,5,38,0,0,30,31,5,38,0,0,31,2,1,0,0,0,32,33,
  	5,124,0,0,33,34,5,124,0,0,34,4,1,0,0,0,35,36,5,42,0,0,36,6,1,0,0,0,37,
  	38,5,43,0,0,38,8,1,0,0,0,39,40,5,45,0,0,40,10,1,0,0,0,41,42,5,47,0,0,
  	42,12,1,0,0,0,43,44,5,38,0,0,44,14,1,0,0,0,45,46,5,33,0,0,46,16,1,0,0,
  	0,47,48,5,40,0,0,48,18,1,0,0,0,49,50,5,41,0,0,50,20,1,0,0,0,51,53,7,0,
  	0,0,52,51,1,0,0,0,53,54,1,0,0,0,54,52,1,0,0,0,54,55,1,0,0,0,55,22,1,0,
  	0,0,56,58,7,0,0,0,57,56,1,0,0,0,58,59,1,0,0,0,59,57,1,0,0,0,59,60,1,0,
  	0,0,60,61,1,0,0,0,61,63,9,0,0,0,62,64,7,0,0,0,63,62,1,0,0,0,64,65,1,0,
  	0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,24,1,0,0,0,67,69,7,1,0,0,68,70,7,2,
  	0,0,69,68,1,0,0,0,70,71,1,0,0,0,71,69,1,0,0,0,71,72,1,0,0,0,72,26,1,0,
  	0,0,73,75,7,3,0,0,74,73,1,0,0,0,75,76,1,0,0,0,76,74,1,0,0,0,76,77,1,0,
  	0,0,77,78,1,0,0,0,78,79,6,13,0,0,79,28,1,0,0,0,6,0,54,59,65,71,76,1,6,
  	0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ranoklexerLexerStaticData = std::move(staticData);
}

}

RanokLexer::RanokLexer(CharStream *input) : Lexer(input) {
  RanokLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *ranoklexerLexerStaticData->atn, ranoklexerLexerStaticData->decisionToDFA, ranoklexerLexerStaticData->sharedContextCache);
}

RanokLexer::~RanokLexer() {
  delete _interpreter;
}

std::string RanokLexer::getGrammarFileName() const {
  return "Ranok.g4";
}

const std::vector<std::string>& RanokLexer::getRuleNames() const {
  return ranoklexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& RanokLexer::getChannelNames() const {
  return ranoklexerLexerStaticData->channelNames;
}

const std::vector<std::string>& RanokLexer::getModeNames() const {
  return ranoklexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& RanokLexer::getVocabulary() const {
  return ranoklexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RanokLexer::getSerializedATN() const {
  return ranoklexerLexerStaticData->serializedATN;
}

const atn::ATN& RanokLexer::getATN() const {
  return *ranoklexerLexerStaticData->atn;
}




void RanokLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ranoklexerLexerInitialize();
#else
  ::antlr4::internal::call_once(ranoklexerLexerOnceFlag, ranoklexerLexerInitialize);
#endif
}
