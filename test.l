%{


#include<stdio.h>
int yylineno = 1; // initialize to 1
void yyerror(char *s);
#include "test.tab.h"


%}

%%
"Hi"        return HI; 
"Bye"       return BYE;
    /* Mathematical Expressions */
"="         return ASSIGN;
"+"         return PLUS;
"-"         return MINUS;
"*"         return MULT;
"/"         return DIV;
"++"        return INC;
"--"        return DEC;
"+="        return PLUS_EQ;
"-="        return MINUS_EQ;
"*="        return MULT_EQ;
"/="        return DIV_EQ;

    /* SemiColon */
";"				return SEMICOLON;

    /* Identifier */
[a-zA-Z][_a-zA-Z0-9]* return IDENTIFIER;
 
.           return OTHER;

%%


int yywrap(void)
{
   return 0;
}

void yyerror(char *s) {
    fprintf(stderr, "\n ERROR ON LINE %d :\n %s \n", yylineno, s);
    exit(0);
}
