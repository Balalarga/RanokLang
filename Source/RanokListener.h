#pragma once
#include "RanokBaseListener.h"
#include "RanokBaseVisitor.h"


class Interpreter: public RanokVisitor {
public:
	std::any visitBinaryOperator(RanokParser::BinaryOperatorContext* context) override;
	std::any visitFuncDecl(RanokParser::FuncDeclContext* context) override;
	std::any visitFuncArgs(RanokParser::FuncArgsContext* context) override;
	std::any visitFuncCall(RanokParser::FuncCallContext* context) override;
	std::any visitVarDecl(RanokParser::VarDeclContext* context) override;
	std::any visitStructDecl(RanokParser::StructDeclContext* context) override;
	std::any visitReturnExpr(RanokParser::ReturnExprContext* context) override;
	std::any visitMain(RanokParser::MainContext* context) override;
	std::any visitMainExpr(RanokParser::MainExprContext* context) override;
	std::any visitPrimaryExpr(RanokParser::PrimaryExprContext* context) override;
	std::any visitUniformInit(RanokParser::UniformInitContext* context) override;
	std::any visitTypedUniformInit(RanokParser::TypedUniformInitContext* context) override;
	std::any visitExpr(RanokParser::ExprContext* context) override;


private:
};
