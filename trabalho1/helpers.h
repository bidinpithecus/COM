#ifndef __HELPERS_H

#include <stdio.h>
#include <stdlib.h>
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

void addToken(Table **table, char *token, char* tokenType, int *numOfTokens, int *numLine, int *numCol) {
	// Primeiro token lido da fita (arquivo)
	if (*table == NULL) {
		(*numOfTokens) += 1;
		*table = newTable();

		(*table)->first = (Row*) malloc(sizeof(Row));

		(*table)->first->token = (char*) malloc((sizeof(char) * strlen(token)));
		strcpy((*table)->first->token, token);

		(*table)->first->type = (char*) malloc(sizeof(char) * strlen(tokenType));
		strcpy((*table)->first->type, tokenType);

		(*table)->first->length = strlen(token);

		(*table)->first->coords = (Coord*) malloc(sizeof(Coord));
		(*table)->first->coords->line = *numLine;
		(*table)->first->coords->col = *numCol;
		(*table)->first->coords->next = NULL;

		(*table)->first->next = NULL;

		(*table)->last = (*table)->first;
	} else {
		// Demais tokens da fita
		Row *tempRow = (*table)->first;
		Row *auxRow = NULL;

		// Laço para percorrer tokens presentes na tabela
		while (tempRow != NULL) {
			// Row *auxRow recebe ponteiro do token da tabela caso token já existente
			if (strcmp(tempRow->token, token) == 0) {
				auxRow = (Row*) malloc(sizeof(Row));
				auxRow = tempRow;
				break;
			// Novo token
			// Row *auxToken permanece NULL
			} else {
				tempRow = (Row*) tempRow->next;
			}
		}

		if (auxRow == NULL) {
			(*numOfTokens) += 1;
			Row *nextToken;
			nextToken = (Row*) malloc(sizeof(Row*));

			nextToken->token = (char*) malloc((sizeof(char) * strlen(token)));
			strcpy(nextToken->token, token);

			nextToken->type = (char*) malloc(sizeof(char) * strlen(tokenType));
			strcpy(nextToken->type, tokenType);

			nextToken->length = strlen(token);

			nextToken->coords = (Coord*) malloc(sizeof(Coord));
			nextToken->coords->line = *numLine;

			nextToken->coords->col = *numCol;
			nextToken->coords->next = NULL;

			nextToken->next = NULL;

			(*table)->last->next = nextToken;

			(*table)->last = nextToken;
		} else {
			Coord* newCoord = (Coord*) malloc(sizeof(Coord));
			newCoord->line = *numLine;
			newCoord->col = *numCol;
			newCoord->next = auxRow->coords;

			auxRow->coords = newCoord;

			// auxRow->coords->next = (Coord*) malloc(sizeof(Coord));
		}
	}
	*numCol += strlen(token);
}

void printTable(Table *table, int tableSize) {
	Row *auxRow;
	auxRow = (Row*)malloc(sizeof(Row));

	auxRow = table->first;
	FILE *fptr;
	fptr = fopen("output.txt", "w+");
	fprintf(fptr, "**************************************\n");
	fprintf(fptr, "          TABELA DE SIMBOLOS          \n");
	fprintf(fptr, "**************************************\n\n");

	fprintf(fptr, "TOKEN\tTIPO\tTAMANHO\tPOSICAO\n");
	for (int i = 0; i < tableSize; i++) {
		fprintf(fptr, "%s\t%s\t%d\t", auxRow->token, auxRow->type, auxRow->length);
		Coord* tempCoord = auxRow->coords;
		while (tempCoord != NULL) {
			if (tempCoord->next == NULL) {
				fprintf(fptr, "(%d, %d)\n", tempCoord->line, tempCoord->col);
			} else {
				fprintf(fptr, "(%d, %d), ", tempCoord->line, tempCoord->col);
			}
			tempCoord = tempCoord->next;
		}
		auxRow = auxRow->next;
	}
	fprintf(fptr, "\n***************************************\n");
	fclose(fptr);
}

#endif