%{
#include <math.h>
%}

/* ============ */
/*  DEFINIÇÕES  */
/* ============ */

NUM [0-9]
CHAR [a-zA-Z]
COMPARISONS "<="|"<"|">"|">="|"=="|"!="
SUM "+"|"-"
MULT "*"|"/"
BOOL "true"|"false"|"TRUE"|"FALSE"
TYPES "int"|"float"|"bool"|"void"
KEYWORDS "if"|"else"|"while"|"return"|";"|"["|"]"|"("|")"|"{"|"}"|","|"="

%%

{COMPARISONS} {
	printf("Operador de comparacao lido: %s", yytext);
}

{MULT} {
	printf("Operador de multiplicacao lido: %s", yytext);
}

{SUM} {
	printf("Operador de soma lido: %s", yytext);
}

{BOOL} {
	printf("Operador booleano lido: %s", yytext);
}

{TYPES} {
	printf("Tipo lido: %s", yytext);
}

{KEYWORDS} {
	printf("Palavra reservada lida: %s", yytext);
}

{NUM}+ {
	printf("Int lido: %d", atoi(yytext));
}

{NUM}+"."{NUM}+ {
	printf("Float lido: %f", atof(yytext));
}

{CHAR}+({NUM}|{CHAR})* {
	printf("ID lido: %s", yytext);
}

%%

int main (int argc, char **argv) {
	++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	yylex();

	return 0;
}