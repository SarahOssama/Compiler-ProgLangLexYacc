%{

#include<string.h>
#include<stdio.h>
#include "parser.tab.h"
int yylineno = 1; //Initialize
void yyerror(char *s);

enum type {
    INT_VAL,
    FLOAT_VAL,
    CHAR_VAL,
    STRING_VAL,
    BOOL_VAL
};

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


    /*Stop Characters*/
"\n"                            {yylineno += 1;}
[\t\r]+                         ;
";"								{ 
                                    return SEMICOLON;}

    /*True and False*/

"true"                          {
                                    yylval.lexemeValue.boolValue = true;
                                    yylval.lexemeValue.type = BOOL_VAL;
                                    return TRUE;
                                }
"false"                         {
                                    yylval.lexemeValue.boolValue = false;
                                    yylval.lexemeValue.type = BOOL_VAL;
                                    return FALSE;
                                }

    /*Identifier and Numbers*/
[a-zA-Z][_a-zA-Z0-9]*           {   
                                    yylval.stringValue = strdup(yytext);                                       
                                    return IDENTIFIER;
                                }
["][a-zA-Z0-9]*["]              {   
                                    yylval.lexemeValue.stringValue = strdup(yytext);
                                    yylval.lexemeValue.type = STRING_VAL;
                                    return STRING;
                                } 

[0-9]+                          { 
                                    yylval.lexemeValue.intValue = atoi(yytext); 
                                    yylval.lexemeValue.type = INT_VAL;
                                    return INT_NUMBER;                               
                                }
[0-9]+[\.][0-9]+                {
                                    yylval.lexemeValue.floatValue = atof(yytext);
                                    yylval.lexemeValue.type = FLOAT_VAL;
                                    return FLOAT_NUMBER;                                 
                                }   
['][a-zA-Z0-9][']              {   
                                    yylval.lexemeValue.charValue = yytext[1];
                                    yylval.lexemeValue.type = CHAR_VAL;
                                    return CHAR;
                                } 
    
    /*Operators*/   
    /*Assignment Operator*/
"="				                return EQUAL;



%%


int yywrap(void)
{
   return 0;
}

void yyerror(char *s) {
    printf("OK\n");
    FILE *errorsFile = fopen("Syntax Errors.txt", "w");
    fprintf(errorsFile, "SYNTAX ERROR ON LINE aa%d : %s \n", yylineno-1, s);
    fprintf(stderr, "\n ERROR ON LINE 44%d :\n %s \n", yylineno, s);
    exit(0);
}
