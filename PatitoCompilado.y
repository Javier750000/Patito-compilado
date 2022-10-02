%{
#include <iostream>
using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" char *yytext;
extern "C" int numeroLinea;
extern "C" FILE *yyin;
 
void yyerror(const char *s);
%}

%union {
int entero;
float flotante;
char *caracter;
}

%start programa
%token suma
%token resta
%token multiplicacion
%token division
%token menorQue
%token mayorQue
%token igualA
%token diferenteDe
%token y
%token o
%token parentesisInicial
%token parentesisFinal
%token llaveInicial
%token llaveFinal
%token corcheteInicial
%token corcheteFinal
%token coma
%token puntoYComa
%token dosPuntos
%token program
%token var
%token print
%token READ
%token func
%token INT
%token FLOAT
%token CHAR
%token VOID
%token RETURN
%token FOR
%token UNTIL
%token WHILE
%token MAIN
%token IF
%token ELSE
%token <entero> cte_i
%token <flotante> cte_f
%token <caracter> cte_string
%token <caracter> id

%%

programa:
    program id puntoYComa FUNCIONES MAIN parentesisInicial parentesisFinal VARS2 BLOQUE {cout<<"El codigo pudo ser leido correctamente."<<endl;};

FUNCIONES:
    funcionSimple
    |funcionVoid
    | ;

funcionSimple:
    func TIPO id parentesisInicial param parentesisFinal VARS2 BLOQUE RETURN parentesisInicial HIPEREXPRESION parentesisFinal puntoYComa FUNCIONES;

funcionVoid:
    func VOID id parentesisInicial param parentesisFinal VARS2 BLOQUE FUNCIONES;

param:
    TIPO id paramsAdicionales;

paramsAdicionales:
    coma param
    | ;

VARS2:
    VARS
    | ;

VARS:
    var listaVars;
listaVars:
    listaIDs dosPuntos TIPO puntoYComa varsAdicionales;
listaIDs:
    id array comasAdicionales;
array:
     corcheteInicial cte_i corcheteFinal matrix
    | ;
matrix:
    corcheteInicial cte_i corcheteFinal
    | ;
comasAdicionales:
    coma listaIDs
    | ;
varsAdicionales:
    listaVars
    | ;

TIPO:
    INT
    | FLOAT;
    | CHAR;

BLOQUE:
    llaveInicial ESTATUTO2 llaveFinal;
ESTATUTO2:
    ESTATUTO ESTATUTO2
    | ;

ESTATUTO:
    ASIGNACION
    | CONDICION
    | ESCRITURA;
    | LECTURA;
    | LLAMADA;
    | CicloFor;
    | CicloWhile;

ESCRITURA:
    print parentesisInicial listaExpresiones parentesisFinal puntoYComa;
listaExpresiones:
    HIPEREXPRESION expresionesAdicionales
    | cte_string expresionesAdicionales;
expresionesAdicionales:
    coma listaExpresiones
    | ;

LECTURA:
    READ VARIABLE puntoYComa;

CicloFor:
    FOR parentesisInicial id igualA HIPEREXPRESION UNTIL HIPEREXPRESION parentesisFinal BLOQUE;

CicloWhile:
    WHILE parentesisInicial HIPEREXPRESION parentesisFinal BLOQUE;

VARIABLE:
    id arrayVariable;
arrayVariable:
     corcheteInicial HIPEREXPRESION corcheteFinal matrixVariable
    | ;
matrixVariable:
    corcheteInicial HIPEREXPRESION corcheteFinal
    | ;

CONDICION:
    IF parentesisInicial HIPEREXPRESION parentesisFinal BLOQUE bloqueCondicional puntoYComa;
bloqueCondicional:
    ELSE BLOQUE
    | ;

LLAMADA:
    id parentesisInicial listaHiperexpresiones parentesisFinal puntoYComa;
listaHiperexpresiones:
    HIPEREXPRESION hiperexpresionesAdicionales;
hiperexpresionesAdicionales:
    coma listaHiperexpresiones
    | ;

ASIGNACION:
    VARIABLE igualA HIPEREXPRESION puntoYComa;

HIPEREXPRESION:
    SUPEREXPRESION yO;
yO:
    y SUPEREXPRESION
    | o SUPEREXPRESION
    | ;

SUPEREXPRESION:
    EXP COMPARACIONES;
COMPARACIONES:
    mayorQue EXP
    | menorQue EXP
    | diferenteDe EXP
    | ;

EXP:
    TERMINO sumaRestaExpresiones;
sumaRestaExpresiones:
    suma EXP
    | resta EXP
    | ;

TERMINO:
    FACTOR multiplicacionDivisionTerminos;
multiplicacionDivisionTerminos:
    multiplicacion TERMINO
    | division TERMINO
    | ;

FACTOR:
    parentesisInicial HIPEREXPRESION parentesisFinal
    | VAR_CTE
    | VARIABLE
    | LLAMADA;

VAR_CTE:
    | cte_i
    | cte_f;

%%

int main()
{
    FILE *archivo = fopen("Archivo.txt", "r");
    if (!archivo)
    {
        cout<<"No se pudo abrir el archivo."<<endl;
        return -1;
    }
    yyin = archivo;
    do
    {
        yyparse();
    } while (!feof(yyin));
    return 0;
}

void yyerror(const char *s)
{
    cout<<"Hay un error en la linea "<<numeroLinea<<". Se leyo un simbolo inesperado: "<<yytext<<"."<<endl;
    exit(-1);
}