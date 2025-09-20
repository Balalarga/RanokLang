
// Generated from D:/Projects/RanokLang/Grammar/Ranok.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RanokListener.h"


/**
 * This class provides an empty implementation of RanokListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RanokBaseListener : public RanokListener {
public:

  virtual void enterBinaryOperator(RanokParser::BinaryOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryOperator(RanokParser::BinaryOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(RanokParser::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(RanokParser::UnaryOperatorContext * /*ctx*/) override { }

  virtual void enterProg(RanokParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(RanokParser::ProgContext * /*ctx*/) override { }

  virtual void enterExpr(RanokParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(RanokParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

