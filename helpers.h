#ifndef __HELPERS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Coord {
	int line;
	int col;
	struct Coord *next;
} Coord;

typedef struct Row {
	char *token;
	char *type;
	int length;
	struct Coord *coords;
	int numOfCoords;
	struct Row *next;
} Row;

typedef struct Table {
	struct Row *first;
	struct Row *last;
} Table;

Table* newTable() {
	Table *table = (Table *)malloc(sizeof(Table));
	table->first = NULL;
	table->last = NULL;

	return table;
}

Coord* searchToken(Table* table, char* token) {
	Row* tokenTable = table->first;

	while (tokenTable != NULL) {
		if (strcmp(tokenTable->token, token) == 0) {
			return tokenTable->coords;
		} else {
			tokenTable = (Row*) tokenTable->next;
		}
	}

	return NULL;
}

void addToken(Table **table, char *token, char* tokenType, int *numOfTokens, int *numLine, int *numCol) {
	(*numOfTokens) += 1;
	if (*table == NULL) {
		*table = newTable();

		(*table)->first = malloc(sizeof(Row));
		// Primeira coluna instanciada

		(*table)->first->token = malloc((sizeof(char) * strlen(token)));
		strcpy((*table)->first->token, token);
		// Token instanciado e adicionado na tabela

		(*table)->first->type = malloc(sizeof(char) * strlen(tokenType));
		strcpy((*table)->first->type, tokenType);
		// Tipo do token lido instanciado e adicionado na tabela

		(*table)->first->length = strlen(token);
		// Tamanho do token lido adicionado na tabela

		(*table)->first->coords = malloc(sizeof(Coord));
		(*table)->first->coords->line = *numLine;
		// Linha do programa em que o token foi encontrado

		(*table)->first->coords->col = *numCol;
		// Coluna da linha em que o token foi encontrado
		(*table)->first->coords->next = NULL;

		(*table)->first->numOfCoords = 1;

		// Proximo token NULL pois não há outro token até o momento
		(*table)->first->next = NULL;

		// Primeiro token lido também é o primeiro.
		(*table)->last = (*table)->first;
	} else {
		Coord* coordToken = searchToken(*table, token);
		if (coordToken == NULL) {
			Row *nextToken;
			nextToken = malloc(sizeof(Row*));
			// Proximo token instanciado

			nextToken->token = (char*)malloc((sizeof(char) * strlen(token)));
			strcpy(nextToken->token, token);
			// Token instanciado

			nextToken->type = (char*)malloc(sizeof(char) * strlen(tokenType));
			strcpy(nextToken->type, tokenType);
			// Tipo do token lido instanciado

			nextToken->length = strlen(token);
			// Tamanho do token lido

			nextToken->coords = malloc(sizeof(Coord));
			nextToken->coords->line = *numLine;
			// Linha do programa em que o token foi encontrado

			nextToken->coords->col = *numCol;
			// Coluna da linha em que o token foi encontrado
			nextToken->coords->next = NULL;

			nextToken->next = NULL;
			// Proximo token NULL pois não há outro token até o momento

			(*table)->last->next = nextToken;
			// Proximo token adicionado na tabela como seguinte do ultimo

			(*table)->last = nextToken;
			// Ultimo token atualizado para o token lido
		} else {
			coordToken->next->line = *numLine;
			coordToken->next->col = *numCol;
			coordToken->next->next = NULL;

			(*table)->last->coords = coordToken;
			(*table)->last->numOfCoords += 1;
		}
	}
	*numCol += strlen(token);
	// Indice da coluna somado com o tamanho do token lido
}

void printTable(Table *table, int tableSize) {
	Row *auxRow;
	auxRow = (Row*)malloc(sizeof(Row));

	auxRow = table->first;
	// Token auxiliar para imprimir os tokens na tabela de simbolos
	FILE *fptr;
	fptr = fopen("output.txt", "w+");
	fprintf(fptr, "**************************************\n");
	fprintf(fptr, "          TABELA DE SIMBOLOS          \n");
	fprintf(fptr, "**************************************\n\n");

	fprintf(fptr, "TOKEN\tTIPO\tTAMANHO\tLINHA\tCOLUNA\n");
	for (int i = 0; i < tableSize; i++) {
		fprintf(fptr, "%s\t%s\t%d\t%d\t%d\n", auxRow->token, auxRow->type, auxRow->length, auxRow->coords->line, auxRow->coords->col);
		auxRow = auxRow->next;
	}
	fprintf(fptr, "\n***************************************\n");
	fclose(fptr);
}

#endif