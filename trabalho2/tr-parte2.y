%{

#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

%}

%union {
	int ival;
	float fval;
}

/* Declaração dos tokens... */

%token<ival> T_INT
%token<fval> T_FLOAT

%token T_ID
%token T_SUM T_SUB
%token T_MULT T_DIV
%token T_TRUE T_FALSE
%token T_OPEN_BRACKETS T_CLOSE_BRACKETS
%token T_OPEN_CURLY_BRACKETS T_CLOSE_CURLY_BRACKETS
%token T_OPEN_PARENTHESIS T_CLOSE_PARENTHESIS
%token T_SEMICOLON
%token T_INT_TYPE T_VOID_TYPE T_FLOAT_TYPE T_BOOL_TYPE
%token T_SMALLER_EQUALS T_SMALLER T_GREATER T_GREATER_EQUALS T_EQUALS T_DIFFERENT
%token T_IF T_ELSE
%token T_WHILE
%token T_RETURN
%token T_COMMA
%token T_ATR
%token T_LEX_ERROR

%left T_SUM T_SUB
%left T_MULT T_DIV

/* %type<ival> expr */
/* %type<fval> mixed_expr */

%start programa

%%
programa: declaracao-lista
    ;

declaracao-lista: declaracao-lista declaracao
    | declaracao
    ;

declaracao: var-declaracao
    /* | fun-declaracao */
    ;

var-declaracao: tipo-especificador T_ID T_SEMICOLON
    | tipo-especificador T_ID T_OPEN_BRACKETS T_INT T_CLOSE_BRACKETS T_SEMICOLON
    ;
/* 
fun-declaracao: tipo-especificador T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS composto-decl
    ; */

tipo-especificador: T_INT_TYPE
    | T_VOID_TYPE
    ;

%%

int main(int argc, char **argv) {
    ++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	do {
		yyparse();
	} while(!feof(yyin));
	
	return 0;
}

void yyerror (char const *s) {
   fprintf (stderr, "Erro sintatico: (%s)\n", s);
}