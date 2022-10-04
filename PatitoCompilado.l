%{
#include <iostream>
using namespace std;
#define YY_DECL extern "C" int yylex()
#include "PatitoCompilado.tab.h"

int numeroLinea = 1;
%}

%%
"+" {return suma;}
"-" {return resta;}
"*" {return multiplicacion;}
"/" {return division;}
"<" {return menorQue;}
">" {return mayorQue;}
"=" {return igualA;}
"<>" {return diferenteDe;}
"&&" {return y;}
"||" {return o;}
"(" {return parentesisInicial;}
")" {return parentesisFinal;}
"{" {return llaveInicial;}
"}" {return llaveFinal;}
"[" {return corcheteInicial;}
"]" {return corcheteFinal;}
"," {return coma;}
";" {return puntoYComa;}
":" {return dosPuntos;}
"program" {return program;}
"var" {return var;}
"print" {return print;}
"read" {return READ;}
"func" {return func;}
"int" {return INT;}
"float" {return FLOAT;}
"char" {return CHAR;}
"void" {return VOID;}
"return" {return RETURN;}
"for" {return FOR;}
"until" {return UNTIL;}
"while" {return WHILE;}
"main" {return MAIN;}
"if" {return IF;}
"else" {return ELSE;}
"media" {return MEDIA;}
"mediana" {return MEDIANA;}
"moda" {return MODA;}
"varianza" {return VARIANZA;}
"desviacion" {return DESVIACION;}
[ \t\r] {;}
[\n] {numeroLinea++; }
[a-zA-Z](_?([a-zA-Z]|[0-9]))* {yylval.caracter = strdup(yytext); return id;}
[0-9]+ {yylval.entero = atoi(yytext); return cte_i;}
[0-9]+\.[0-9]+ {yylval.flotante = atof(yytext); return cte_f;}
\"(\\.|[^\\"])*\" {yylval.caracter = strdup(yytext); return cte_string;}
%%

int yywrap()
{
	return 1;
}