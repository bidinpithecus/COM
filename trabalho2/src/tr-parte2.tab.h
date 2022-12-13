/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TR_PARTE2_TAB_H_INCLUDED
# define YY_YY_TR_PARTE2_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INT = 258,                   /* T_INT  */
    T_BOOL = 259,                  /* T_BOOL  */
    T_TRUE = 260,                  /* T_TRUE  */
    T_FALSE = 261,                 /* T_FALSE  */
    T_INT_TYPE = 262,              /* T_INT_TYPE  */
    T_BOOL_TYPE = 263,             /* T_BOOL_TYPE  */
    T_FLOAT_TYPE = 264,            /* T_FLOAT_TYPE  */
    T_FLOAT = 265,                 /* T_FLOAT  */
    T_SMALLER_EQUALS = 266,        /* T_SMALLER_EQUALS  */
    T_SMALLER = 267,               /* T_SMALLER  */
    T_GREATER = 268,               /* T_GREATER  */
    T_GREATER_EQUALS = 269,        /* T_GREATER_EQUALS  */
    T_EQUALS = 270,                /* T_EQUALS  */
    T_DIFFERENT = 271,             /* T_DIFFERENT  */
    T_PRINT = 272,                 /* T_PRINT  */
    T_SUM = 273,                   /* T_SUM  */
    T_SUB = 274,                   /* T_SUB  */
    T_MULT = 275,                  /* T_MULT  */
    T_DIV = 276,                   /* T_DIV  */
    T_AND = 277,                   /* T_AND  */
    T_OR = 278,                    /* T_OR  */
    T_ID = 279,                    /* T_ID  */
    T_SEMICOLON = 280,             /* T_SEMICOLON  */
    T_OPEN_BRACKETS = 281,         /* T_OPEN_BRACKETS  */
    T_CLOSE_BRACKETS = 282,        /* T_CLOSE_BRACKETS  */
    T_OPEN_CURLY_BRACKETS = 283,   /* T_OPEN_CURLY_BRACKETS  */
    T_CLOSE_CURLY_BRACKETS = 284,  /* T_CLOSE_CURLY_BRACKETS  */
    T_OPEN_PARENTHESIS = 285,      /* T_OPEN_PARENTHESIS  */
    T_CLOSE_PARENTHESIS = 286,     /* T_CLOSE_PARENTHESIS  */
    T_COLON = 287,                 /* T_COLON  */
    T_IF = 288,                    /* T_IF  */
    T_ELSE = 289,                  /* T_ELSE  */
    T_WHILE = 290,                 /* T_WHILE  */
    T_FOR = 291,                   /* T_FOR  */
    T_RETURN = 292,                /* T_RETURN  */
    T_COMMA = 293,                 /* T_COMMA  */
    T_ATR = 294,                   /* T_ATR  */
    T_FUNCTION = 295,              /* T_FUNCTION  */
    T_PROCEDURE = 296              /* T_PROCEDURE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "tr-parte2.y"

	int ival;
	float fval;
	char cval;
	char* sval;
	struct {
		int type;
		char* id;
	} typeAndId;
	Type symboltypeval;

#line 117 "tr-parte2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TR_PARTE2_TAB_H_INCLUDED  */
