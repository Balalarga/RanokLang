grammar Ranok;

fragment Int
    : '0'
    | [1-9] [0-9]*
    ;

Float
	: Int '.'
	| '.' Int
	| Int '.' Int
	;
Number
	: Int | Float
	;

Whitespaces
	: [ \t\r\n]+ -> skip
	;

Directive
	: '#' ~ [\n]* -> channel(HIDDEN)
	;
MultiLineMacro
    : '#' (~[\n]*? '\\' '\r'? '\n')+ ~ [\n]+ -> channel (HIDDEN)
    ;

BlockComment
    : '/*' .*? '*/' -> channel(HIDDEN)
    ;

LineComment
    : '//' ~[\r\n]* -> channel(HIDDEN)
    ;

Id
    : IdentifierNondigit (IdentifierNondigit | [0-9])*
    ;
fragment IdentifierNondigit
    : Nondigit
    | UniversalCharacterName
    ;
fragment UniversalCharacterName
    : '\\u' HexQuad
    | '\\U' HexQuad HexQuad
    ;
fragment HexQuad
    : Hex Hex Hex Hex
    ;
fragment Hex
    : [0-9a-fA-F]
    ;
fragment Nondigit
    : [a-zA-Z_]
    ;

String
    : '"' (Esc | SafeCodePoint)* '"'
    ;
fragment Esc
    : '\\' (["\\/bfnrt] | UniversalCharacterName)
    ;
fragment SafeCodePoint
    : ~ ["\\\u0000-\u001F]
    ;

binaryOperator
    : '*'
    | '/'
    | '+'
    | '-'
    | '||'
    | '&&'
    ;

funcDecl
	: 'func' Id '(' funcArgs? ')' '{' primaryExpr? '}'
	;

funcArgs
	: varDecl (',' varDecl)?
	;

funcCall
	: Id '(' (expr (',' expr)?)? ')'
	;

varDecl
	: ('var' | Id) Id ('=' expr)?
	;

structDecl
	: 'struct' Id '{' (funcDecl | varDecl)? '}'
	;

returnExpr
	: 'return' expr
	;

main
	: mainExpr EOF
	;

mainExpr
	: primaryExpr+
	;


primaryExpr
	: funcDecl
	| funcCall ';'
	| structDecl ';'
	| varDecl ';'
	| returnExpr ';'
	;

uniformInit
	: '{' expr (',' expr)? '}'
	;
typedUniformInit
	: Id uniformInit
	;

expr
	: expr binaryOperator expr
	| typedUniformInit
	| uniformInit
	| funcCall
	| Id
	| Number
	;