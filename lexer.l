%{


#include<stdio.h>
int yylineno = 1; //Initialize
void yyerror(char *s);
#include "parser.tab.h"


%}

%%

"<<EOF>>"                       return EOF;
    /* Mathematical Expressions */
"+"                             return PLUS;
"-"                             return MINUS;
"*"                             return MULT;
"/"                             return DIV;
"++"                            return INC;
"--"                            return DEC;
"+="                            return PLUS_EQ;
"-="                            return MINUS_EQ;
"*="                            return MULT_EQ;
"/="                            return DIV_EQ;
   
    /* Comparison Op*/
">="                            return GE;
"<="                            return LE;
"=="                            return EQ_EQ;
"!="                            return NE;
"<"				                return LT;
">"				                return GT;

    /* Logical Expressions */
"&&"                            return AND;
"||"                            return OR;
"!"                             return NOT;

    /*Types*/
"int"                           return INT; 
                             
"float"                         return FLOAT;
"string"                        return STRING;
"char"                          return CHAR;
"bool"                          return BOOL;
    /*Constant*/
"const"                         return CONST;

    /* if then else statment */
"if"                            return IF;
"then"                          return THEN;
"else"                          return ELSE;

    /* Brackets */
"("                             return OPENBRACKET;
")"                             return CLOSEDBRACKET;
"{"                             return OPENCURL;
"}"                             return CLOSEDCURL;

    /*Functions*/
"void"                          return VOID; 
"return"                        return RETURN;  
","                             return COMMA;
":"                             return COLON;

    /* While & do-while statment */
"while"                         return WHILE;
"do"                            return DO;
"for"                           return FOR;


    /*Identifier and Numbers*/
[a-zA-Z][_a-zA-Z0-9]*           {   
                                    yylval.stringValue = yytext;
                                    
                                    return IDENTIFIER;
                                }

[0-9]+                          { 
                                    yylval.intValue = atoi(yytext); 
                                    return NUMBER;}

    /*Operators*/
    /*Assignment Operator*/
"="				                return EQUAL;

    /*Stop Characters*/
"\n"                            {yylineno += 1;}
[\t\r]+                         ;
";"                             return SEMICOLON;

%%


int yywrap(void)
{
   return 0;
}

void yyerror(char *s) {
    fprintf(stderr, "\n ERROR ON LINE %d :\n %s \n", yylineno, s);
    exit(0);
}
