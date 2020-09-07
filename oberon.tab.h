/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_OBERON_TAB_H_INCLUDED
# define YY_YY_OBERON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ident = 258,
    CONSTchar = 259,
    CONSTstring = 260,
    CONSTnumber = 261,
    ARRAY = 262,
    IMPORT = 263,
    GTEQ = 264,
    ASSIGN = 265,
    IN = 266,
    RETURN = 267,
    BY = 268,
    IS = 269,
    THEN = 270,
    CASE = 271,
    LOOP = 272,
    TO = 273,
    CONST = 274,
    LTEQ = 275,
    TYPE = 276,
    DIV = 277,
    MOD = 278,
    UNTIL = 279,
    DO = 280,
    MODULE = 281,
    VAR = 282,
    DOTDOT = 283,
    NIL = 284,
    WHILE = 285,
    ELSE = 286,
    OF = 287,
    WITH = 288,
    ELSIF = 289,
    OR = 290,
    END = 291,
    POINTER = 292,
    EXIT = 293,
    PROCEDURE = 294,
    FOR = 295,
    RECORD = 296,
    IF = 297,
    REPEAT = 298,
    OBEGIN = 299,
    UPLUS = 300,
    UMINUS = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "oberon.y" /* yacc.c:1909  */

    int number;
    char symbol;
	char string[30];
	struct nodeType *node;

#line 108 "oberon.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_OBERON_TAB_H_INCLUDED  */
