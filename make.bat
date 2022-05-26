flex lexer.l
bison -d parser.y
g++ lex.yy.c parser.tab.c
a.exe