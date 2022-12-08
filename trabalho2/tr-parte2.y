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
	char cval;
	char* sval;
}

/* Declaração dos tokens... */

%token<ival> T_INT T_BOOL T_TRUE T_FALSE
%token<fval> T_FLOAT
%token<fval> T_VOID
%token<sval> T_SMALLER_EQUALS T_SMALLER T_GREATER T_GREATER_EQUALS T_EQUALS T_DIFFERENT
%token<cval> T_SUM T_SUB T_MULT T_DIV

%token T_ID
%token T_OPEN_BRACKETS T_CLOSE_BRACKETS
%token T_OPEN_CURLY_BRACKETS T_CLOSE_CURLY_BRACKETS
%token T_OPEN_PARENTHESIS T_CLOSE_PARENTHESIS
%token T_SEMICOLON T_COLON
%token T_IF T_ELSE
%token T_WHILE
%token T_RETURN
%token T_COMMA
%token T_ATR
%token T_FUNCTION T_PROCEDURE

%left T_SUM T_SUB
%left T_MULT T_DIV

%type<sval> tipo-especificador relacional soma mult

%start programa

%%
programa:		declaracao-lista { printf("Programa lido com sucesso\n"); }
	;

declaracao-lista:	declaracao-lista declaracao
	|		declaracao
	;

declaracao:		var-declaracao
	|		fun-declaracao
	;

var-declaracao:		tipo-especificador T_ID T_SEMICOLON 
	|		tipo-especificador T_ID T_OPEN_BRACKETS T_INT T_CLOSE_BRACKETS T_SEMICOLON
	;

tipo-especificador:	T_INT { $$ = strdup($1); }
	|				T_FLOAT { $$ = strdup($1); }
	|				T_VOID { $$ = strdup($1); }
	|				T_BOOL { $$ = strdup($1); }
	;

fun-declaracao:		fun
	|		procedure
	;

fun: T_FUNCTION T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS T_COLON tipo-especificador composto-decl 
	;

procedure: T_PROCEDURE T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS composto-decl

params:		param-lista
	|		T_VOID
	;

param-lista:	param-lista T_COMMA param
	|			param
	;

param:		T_ID T_COLON tipo-especificador
	|		T_ID T_COLON tipo-especificador T_OPEN_BRACKETS T_CLOSE_BRACKETS
	;

composto-decl:		T_OPEN_CURLY_BRACKETS local-declaracoes statement-lista T_CLOSE_CURLY_BRACKETS
	;

local-declaracoes:	local-declaracoes var-declaracao
	|
	;

statement-lista:	statement-lista statement
	|
	;

statement:	expressao-decl
	|		composto-decl
	|		selecao-decl
	|		iteracao-decl
	|		retorno-decl // { $$ = strdup($1); }
	;

expressao-decl:		expressao T_SEMICOLON
	|				T_SEMICOLON
	;

selecao-decl:	T_IF T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS statement
	|			T_IF T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS statement T_ELSE statement
	;

iteracao-decl:	T_WHILE T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS statement
	;

retorno-decl:	T_RETURN T_SEMICOLON
	|			T_RETURN expressao T_SEMICOLON
	;

expressao:	var T_ATR expressao
	|		simples-expressao
	;

var:	T_ID
	|	T_ID T_OPEN_BRACKETS expressao T_CLOSE_BRACKETS
	;

simples-expressao:	soma-expressao relacional soma-expressao
	|				soma-expressao
	;

relacional:		T_SMALLER_EQUALS { $$ = strdup($1); }
	|			T_SMALLER { $$ = strdup($1); }
	|			T_GREATER { $$ = strdup($1); }
	|			T_GREATER_EQUALS { $$ = strdup($1); }
	|			T_EQUALS { $$ = strdup($1); }
	|			T_DIFFERENT { $$ = strdup($1); }
	;

soma-expressao:		soma-expressao soma termo
	|				termo
	;

soma:		T_SUM {$$ = strdup($1); }
	|		T_SUB { $$ = strdup($1); }
	;

termo:		termo mult fator
	|		fator
	;
	
mult:		T_MULT { $$ = strdup($1); }
	|		T_DIV { $$ = strdup($1); }
	;

fator:		T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS
	|		var
	|		ativacao
	|		T_INT
	;

ativacao:	T_ID T_OPEN_PARENTHESIS args T_CLOSE_PARENTHESIS
	;

args:		arg-lista
	|
	;

arg-lista:	arg-lista T_COMMA expressao
	|		expressao
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
