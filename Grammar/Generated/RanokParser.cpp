
// Generated from D:/Projects/RanokLang/Grammar/Ranok.g4 by ANTLR 4.13.2


#include "RanokListener.h"

#include "RanokParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RanokParserStaticData final {
  RanokParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RanokParserStaticData(const RanokParserStaticData&) = delete;
  RanokParserStaticData(RanokParserStaticData&&) = delete;
  RanokParserStaticData& operator=(const RanokParserStaticData&) = delete;
  RanokParserStaticData& operator=(RanokParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ranokParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RanokParserStaticData> ranokParserStaticData = nullptr;

void ranokParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (ranokParserStaticData != nullptr) {
    return;
  }
#else
  assert(ranokParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RanokParserStaticData>(
    std::vector<std::string>{
      "binaryOperator", "unaryOperator", "prog", "expr"
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
  	4,1,14,34,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,1,1,1,1,2,1,2,1,2,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,23,8,3,1,3,1,3,1,3,1,3,5,3,29,8,3,10,
  	3,12,3,32,9,3,1,3,0,1,6,4,0,2,4,6,0,2,1,0,1,6,2,0,3,5,7,8,32,0,8,1,0,
  	0,0,2,10,1,0,0,0,4,12,1,0,0,0,6,22,1,0,0,0,8,9,7,0,0,0,9,1,1,0,0,0,10,
  	11,7,1,0,0,11,3,1,0,0,0,12,13,3,6,3,0,13,14,5,0,0,1,14,5,1,0,0,0,15,16,
  	6,3,-1,0,16,23,5,11,0,0,17,23,5,13,0,0,18,19,5,9,0,0,19,20,3,6,3,0,20,
  	21,5,10,0,0,21,23,1,0,0,0,22,15,1,0,0,0,22,17,1,0,0,0,22,18,1,0,0,0,23,
  	30,1,0,0,0,24,25,10,4,0,0,25,26,3,0,0,0,26,27,3,6,3,5,27,29,1,0,0,0,28,
  	24,1,0,0,0,29,32,1,0,0,0,30,28,1,0,0,0,30,31,1,0,0,0,31,7,1,0,0,0,32,
  	30,1,0,0,0,2,22,30
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ranokParserStaticData = std::move(staticData);
}

}

RanokParser::RanokParser(TokenStream *input) : RanokParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RanokParser::RanokParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RanokParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ranokParserStaticData->atn, ranokParserStaticData->decisionToDFA, ranokParserStaticData->sharedContextCache, options);
}

RanokParser::~RanokParser() {
  delete _interpreter;
}

const atn::ATN& RanokParser::getATN() const {
  return *ranokParserStaticData->atn;
}

std::string RanokParser::getGrammarFileName() const {
  return "Ranok.g4";
}

const std::vector<std::string>& RanokParser::getRuleNames() const {
  return ranokParserStaticData->ruleNames;
}

const dfa::Vocabulary& RanokParser::getVocabulary() const {
  return ranokParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RanokParser::getSerializedATN() const {
  return ranokParserStaticData->serializedATN;
}


//----------------- BinaryOperatorContext ------------------------------------------------------------------

RanokParser::BinaryOperatorContext::BinaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RanokParser::BinaryOperatorContext::getRuleIndex() const {
  return RanokParser::RuleBinaryOperator;
}

void RanokParser::BinaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RanokListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOperator(this);
}

void RanokParser::BinaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RanokListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOperator(this);
}

RanokParser::BinaryOperatorContext* RanokParser::binaryOperator() {
  BinaryOperatorContext *_localctx = _tracker.createInstance<BinaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 0, RanokParser::RuleBinaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 126) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

RanokParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RanokParser::UnaryOperatorContext::getRuleIndex() const {
  return RanokParser::RuleUnaryOperator;
}

void RanokParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RanokListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void RanokParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RanokListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}

RanokParser::UnaryOperatorContext* RanokParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 2, RanokParser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(10);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 440) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

RanokParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RanokParser::ExprContext* RanokParser::ProgContext::expr() {
  return getRuleContext<RanokParser::ExprContext>(0);
}

tree::TerminalNode* RanokParser::ProgContext::EOF() {
  return getToken(RanokParser::EOF, 0);
}


size_t RanokParser::ProgContext::getRuleIndex() const {
  return RanokParser::RuleProg;
}

void RanokParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RanokListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void RanokParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RanokListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

RanokParser::ProgContext* RanokParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 4, RanokParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    expr(0);
    setState(13);
    match(RanokParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

RanokParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RanokParser::ExprContext::Int() {
  return getToken(RanokParser::Int, 0);
}

tree::TerminalNode* RanokParser::ExprContext::Id() {
  return getToken(RanokParser::Id, 0);
}

std::vector<RanokParser::ExprContext *> RanokParser::ExprContext::expr() {
  return getRuleContexts<RanokParser::ExprContext>();
}

RanokParser::ExprContext* RanokParser::ExprContext::expr(size_t i) {
  return getRuleContext<RanokParser::ExprContext>(i);
}

RanokParser::BinaryOperatorContext* RanokParser::ExprContext::binaryOperator() {
  return getRuleContext<RanokParser::BinaryOperatorContext>(0);
}


size_t RanokParser::ExprContext::getRuleIndex() const {
  return RanokParser::RuleExpr;
}

void RanokParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RanokListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void RanokParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RanokListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


RanokParser::ExprContext* RanokParser::expr() {
   return expr(0);
}

RanokParser::ExprContext* RanokParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  RanokParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  RanokParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, RanokParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(22);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RanokParser::Int: {
        setState(16);
        match(RanokParser::Int);
        break;
      }

      case RanokParser::Id: {
        setState(17);
        match(RanokParser::Id);
        break;
      }

      case RanokParser::T__8: {
        setState(18);
        match(RanokParser::T__8);
        setState(19);
        expr(0);
        setState(20);
        match(RanokParser::T__9);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(30);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(24);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(25);
        binaryOperator();
        setState(26);
        expr(5); 
      }
      setState(32);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool RanokParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool RanokParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void RanokParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ranokParserInitialize();
#else
  ::antlr4::internal::call_once(ranokParserOnceFlag, ranokParserInitialize);
#endif
}
