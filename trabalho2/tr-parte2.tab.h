/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_TR_PARTE2_TAB_H_INCLUDED
# define YY_YY_TR_PARTE2_TAB_H_INCLUDED
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
    T_INT = 258,
    T_FLOAT = 259,
    T_ID = 260,
    T_SUM = 261,
    T_SUB = 262,
    T_MULT = 263,
    T_DIV = 264,
    T_TRUE = 265,
    T_FALSE = 266,
    T_OPEN_BRACKETS = 267,
    T_CLOSE_BRACKETS = 268,
    T_OPEN_CURLY_BRACKETS = 269,
    T_CLOSE_CURLY_BRACKETS = 270,
    T_OPEN_PARENTHESIS = 271,
    T_CLOSE_PARENTHESIS = 272,
    T_SEMICOLON = 273,
    T_INT_TYPE = 274,
    T_VOID_TYPE = 275,
    T_FLOAT_TYPE = 276,
    T_BOOL_TYPE = 277,
    T_SMALLER_EQUALS = 278,
    T_SMALLER = 279,
    T_GREATER = 280,
    T_GREATER_EQUALS = 281,
    T_EQUALS = 282,
    T_DIFFERENT = 283,
    T_IF = 284,
    T_ELSE = 285,
    T_WHILE = 286,
    T_RETURN = 287,
    T_COMMA = 288,
    T_ATR = 289,
    T_LEX_ERROR = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "tr-parte2.y"

	int ival;
	float fval;

#line 98 "tr-parte2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TR_PARTE2_TAB_H_INCLUDED  */
