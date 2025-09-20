grammar Ranok;

Int: [0-9]+;
Float: [0-9]+.[0-9]+;
Id: [a-zA-Z] [a-zA-Z0-9]+;
NewLine: [\r\n]+ -> skip;
Void: 'void';
Return: 'return';
Var: 'var';

LeftParen: '(';
RightParen: ')';

LeftBracket: '[';
RightBracket: ']';

LeftBrace: '{';
RightBrace: '}';


binaryOperator
    : '&&'
    | '||'
    | '*'
    | '+'
    | '-'
    | '/'
    ;
unaryOperator
    : '&'
    | '*'
    | '+'
    | '-'
    | '!'
    ;

prog:	expr EOF;
expr:	expr binaryOperator expr
    |	Int
    |	Id
    |	'(' expr ')'
    ;


