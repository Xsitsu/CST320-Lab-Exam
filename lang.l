%{
//**************************************
// lang.l
//
// scanner definition file. flex uses this file to create the scanner
//
// Author: Jacob Locke
//

#include "lex.h"
#include "langparse.h"

#define DO_RETURN(a) { return (a); }
//#define DO_RETURN(a) { return Return(a); }

int Return(int val);

%}

%option noyywrap
%option noinput
%option nounput
%option yylineno


whitespace                  [\t\n\r ]

variable                    [A-Z]
number                      [0-9]

%%
{whitespace}*                   ; /* ignore whitespace */
"//".*"\n"                      ; /* ignore C++ style comments */


 /*Punctuation*/
[()+\-*\/]                      {
                                    DO_RETURN(yytext[0]);
                                }

 /*Keywords*/
"pop"                            DO_RETURN(POP);
"print"                          DO_RETURN(PRINT);
"end"                            DO_RETURN(END);


 /*Others*/
 {variable}                     {
                                    yylval.str_val = yytext;
                                    DO_RETURN(VARIABLE);
                                }

 ?-[number]+                    {
                                    yylval.int_val = atoi(yytext);
                                    DO_RETURN(INT_VAL);
                                }

 /*Junk*/
 .                              DO_RETURN(JUNK_TOKEN);
%%

int Return(int val)
{
    printf("Scanned '%s': %d\n", yytext, val);
    return val;
}
