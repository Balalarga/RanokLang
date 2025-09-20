
// Generated from D:/Projects/RanokLang/Grammar/Ranok.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RanokParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RanokParser.
 */
class  RanokListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterBinaryOperator(RanokParser::BinaryOperatorContext *ctx) = 0;
  virtual void exitBinaryOperator(RanokParser::BinaryOperatorContext *ctx) = 0;

  virtual void enterUnaryOperator(RanokParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(RanokParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterProg(RanokParser::ProgContext *ctx) = 0;
  virtual void exitProg(RanokParser::ProgContext *ctx) = 0;

  virtual void enterExpr(RanokParser::ExprContext *ctx) = 0;
  virtual void exitExpr(RanokParser::ExprContext *ctx) = 0;


};

