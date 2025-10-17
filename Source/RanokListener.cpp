#include "RanokListener.h"
#include <print>


std::any Interpreter::visitBinaryOperator(RanokParser::BinaryOperatorContext* context) {
	return visitChildren(context);
}

std::any Interpreter::visitFuncDecl(RanokParser::FuncDeclContext* context) {
	return visitChildren(context);
}

std::any Interpreter::visitFuncArgs(RanokParser::FuncArgsContext* context) {
	return visitChildren(context);
}

std::any Interpreter::visitFuncCall(RanokParser::FuncCallContext* context) {
	return visitChildren(context);
}

std::any Interpreter::visitVarDecl(RanokParser::VarDeclContext* context) {
	std::println("VarDecl ('{}', '{}')", context->start->getText(), context->stop->getText());
	return visitChildren(context);
}

std::any Interpreter::visitStructDecl(RanokParser::StructDeclContext* context) {
	return visitChildren(context);
}

std::any Interpreter::visitReturnExpr(RanokParser::ReturnExprContext* context) {
	return visitChildren(context);
}

std::any Interpreter::visitMain(RanokParser::MainContext* context) {
	std::println("Main ('{}', '{}')", context->start->getText(), context->stop->getText());
	return visitChildren(context);
}

std::any Interpreter::visitMainExpr(RanokParser::MainExprContext* context) {
	std::println("MainExpr ('{}', '{}')", context->start->getText(), context->stop->getText());
	return visitChildren(context);
}

std::any Interpreter::visitPrimaryExpr(RanokParser::PrimaryExprContext* context) {
	std::println("PrimaryExpr ('{}', '{}')", context->start->getText(), context->stop->getText());
	return visitChildren(context);
}

std::any Interpreter::visitUniformInit(RanokParser::UniformInitContext* context) {
	return visitChildren(context);
}

std::any Interpreter::visitTypedUniformInit(RanokParser::TypedUniformInitContext* context) {
	return visitChildren(context);
}

std::any Interpreter::visitExpr(RanokParser::ExprContext* context) {
	std::println("Expr ('{}', '{}')", context->start->getText(), context->stop->getText());
	return visitChildren(context);
}
