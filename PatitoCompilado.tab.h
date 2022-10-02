
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
     mayorQue = 263,
     igualA = 264,
     diferenteDe = 265,
     y = 266,
     o = 267,
     parentesisInicial = 268,
     parentesisFinal = 269,
     llaveInicial = 270,
     llaveFinal = 271,
     corcheteInicial = 272,
     corcheteFinal = 273,
     coma = 274,
     puntoYComa = 275,
     dosPuntos = 276,
     program = 277,
     var = 278,
     print = 279,
     READ = 280,
     func = 281,
     INT = 282,
     FLOAT = 283,
     CHAR = 284,
     VOID = 285,
     RETURN = 286,
     MAIN = 287,
     IF = 288,
     ELSE = 289,
     cte_i = 290,
     cte_f = 291,
     cte_string = 292,
     id = 293
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 14 "PatitoCompilado.y"

int entero;
float flotante;
char *caracter;



/* Line 1676 of yacc.c  */
#line 98 "PatitoCompilado.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


