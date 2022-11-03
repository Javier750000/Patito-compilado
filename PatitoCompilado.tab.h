
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     suma = 258,
     resta = 259,
     multiplicacion = 260,
     division = 261,
     menorQue = 262,
     menorIgualQue = 263,
     mayorQue = 264,
     mayorIgualQue = 265,
     igualA = 266,
     igualABooleano = 267,
     diferenteDe = 268,
     y = 269,
     o = 270,
     parentesisInicial = 271,
     parentesisFinal = 272,
     llaveInicial = 273,
     llaveFinal = 274,
     corcheteInicial = 275,
     corcheteFinal = 276,
     coma = 277,
     puntoYComa = 278,
     dosPuntos = 279,
     program = 280,
     var = 281,
     print = 282,
     READ = 283,
     func = 284,
     INT = 285,
     FLOAT = 286,
     CHAR = 287,
     VOID = 288,
     RETURN = 289,
     FOR = 290,
     UNTIL = 291,
     WHILE = 292,
     MAIN = 293,
     IF = 294,
     ELSE = 295,
     MEDIA = 296,
     MEDIANA = 297,
     MODA = 298,
     VARIANZA = 299,
     DESVIACION = 300,
     cte_i = 301,
     cte_f = 302,
     cte_string = 303,
     id = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "PatitoCompilado.y"

int entero;
float flotante;
char *caracter;



/* Line 1676 of yacc.c  */
#line 109 "PatitoCompilado.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


