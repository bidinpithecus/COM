#include "helpers.h"
#include <stdio.h>

char outputFileName[] = "output/output.j";
char writeContent[] = "w";
char appendContent[] = "a";

char* opIf = NULL;

char intInitial = 'i';
char floatInitial = 'f';

int numberOfTokensAdded = 2;
int labelNum = 0;

Table* table = NULL;

Table* newTable() {
	Table *table = (Table *)malloc(sizeof(Table));
	table->first = NULL;
	table->last = NULL;

	return table;
}

void addToken(Table **table, char *lexema, char* tokenType, int *numOfTokens, int *numLine, int *numCol) {
	// Primeiro lexema lido da fita (arquivo)
	if (*table == NULL) {
		(*numOfTokens) += 1;
		*table = newTable();

		(*table)->first = (Row*) malloc(sizeof(Row));

		(*table)->first->lexema = (char*) malloc((sizeof(char) * strlen(lexema)));
		strcpy((*table)->first->lexema, lexema);

		(*table)->first->token = (char*) malloc(sizeof(char) * strlen(tokenType));
		strcpy((*table)->first->token, tokenType);

		// Initializing in zero to know if it has already been read
		(*table)->first->varNumber = 0;
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
			// Row *auxRow recebe ponteiro do lexema da tabela caso lexema já existente
			if (strcmp(tempRow->lexema, lexema) == 0) {
				auxRow = (Row*) malloc(sizeof(Row));
				auxRow = tempRow;
				break;
			// Novo lexema
			// Row *auxToken permanece NULL
			} else {
				tempRow = (Row*) tempRow->next;
			}
		}

		if (auxRow == NULL) {
			(*numOfTokens) += 1;
			Row *nextToken;
			nextToken = (Row*) malloc(sizeof(Row));

			nextToken->lexema = (char*) malloc((sizeof(char) * strlen(lexema)));
			strcpy(nextToken->lexema, lexema);

			nextToken->token = (char*) malloc(sizeof(char) * strlen(tokenType));
			strcpy(nextToken->token, tokenType);

			nextToken->varNumber = 0;
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
		}
	}
	*numCol += strlen(lexema);
}

void pointError(char* lexema, char* typeErr, int numLine, int numCol) {
	printf("Erro %s em linha %d, coluna %d: %s\n", typeErr, numLine, numCol, lexema);
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

	fprintf(fptr, "LEXEMA\t\tTOKEN\t\tPOSICAO\n");
	for (int i = 0; i < tableSize; i++) {
		fprintf(fptr, "%s\t\t%s\t\t", auxRow->lexema, auxRow->token);
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

void manipulateOutputFile(char *fileName, char* modes, char* content) {
	FILE* fptr = fopen(fileName, modes);

	if (fptr == NULL) {
		printf("Unable to open file\n");
		exit(-1);
	}

	fprintf(fptr, "%s", content);
	fclose(fptr);
}

void writeInitialMethod() {
	char fileContent[] = ".source teste.txt\n.class public test\n.super java/lang/Object\n.method public <init>()V\n\taload_0\n\tinvokenonvirtual java/lang/Object/<init>()V\nreturn\n.end method\n";
	manipulateOutputFile(outputFileName, writeContent, fileContent);
}

void writeStartMainMethod() {
	char fileContent[] = ".method public static main([Ljava/lang/String;)V\n.limit locals 100\n.limit stack 100\niconst_0\nistore 1\nfconst_0\nfstore 2\n";
	manipulateOutputFile(outputFileName, appendContent, fileContent);
}

void initiateProgram() {
	writeInitialMethod();
	writeStartMainMethod();
}

void writeFinalMainMethod() {
	char fileContent[] = "return\n.end method\n";
	manipulateOutputFile(outputFileName, appendContent, fileContent);
}

void finishProgram() {
	writeFinalMainMethod();
}

void writePrintOnCode(char type) {
	char getStatic[] = "getstatic java/lang/System/out Ljava/io/PrintStream;\n";
	char invokeVirtual[] = "invokevirtual java/io/PrintStream/println(";

	if (type == 'i') {
		manipulateOutputFile(outputFileName, appendContent, "istore 1\n");
		manipulateOutputFile(outputFileName, appendContent, getStatic);
		manipulateOutputFile(outputFileName, appendContent, "iload 1\n");
		manipulateOutputFile(outputFileName, appendContent, invokeVirtual);
		manipulateOutputFile(outputFileName, appendContent, "I)V\n");
	} else if (type == 'f') {
		manipulateOutputFile(outputFileName, appendContent, "fstore 2\n");
		manipulateOutputFile(outputFileName, appendContent, getStatic);
		manipulateOutputFile(outputFileName, appendContent, "fload 2\n");
		manipulateOutputFile(outputFileName, appendContent, invokeVirtual);
		manipulateOutputFile(outputFileName, appendContent, "F)V\n");
	}
}

void loadVariable(Table *table, char id[]) {
	Row* token = (Row*) malloc(sizeof(Row));
	token = getToken(table, id);

	char* fileContent = malloc(sizeof(char));
	if (strcmp(token->token, "int") || strcmp(token->token, "bool")) {
		fileContent[0] = 'i';
	} else if (strcmp(token->token, "float")) {
		fileContent[0] = 'f';
	}

	fileContent = realloc(fileContent, sizeof(char) + sizeof(char) * strlen("load ") + strlen(intToString(token->varNumber) + sizeof(char)));
	strcat(fileContent, "load ");
	strcat(fileContent, intToString(token->varNumber));
	strcat(fileContent, "\n");

	manipulateOutputFile(outputFileName, appendContent, fileContent);
	free(fileContent);
}

Row* getToken(Table* table, char id[]) {
	Row *auxRow;

	auxRow = (Row*)malloc(sizeof(Row));
	auxRow = table->first;

	while (auxRow != NULL) {
		if (strcmp(auxRow->lexema, id) == 0) {
			return auxRow;
		}
		auxRow = auxRow->next;
	}

	return NULL;
}

int getTokenVarNumber(Table* table, char id[]) {
	Row *auxRow;

	auxRow = (Row*)malloc(sizeof(Row));
	auxRow = table->first;
	while (auxRow != NULL) {
		if (strcmp(auxRow->lexema, id) == 0) {
			return auxRow->varNumber;
		}
		auxRow = auxRow->next;
	}

	return -1;
}

void changeTokenOnRow(Table* table, char id[], char newToken[]) {
	Row *auxRow;

	auxRow = (Row*)malloc(sizeof(Row));
	auxRow = table->first;

	while (auxRow != NULL) {
		if (strcmp(auxRow->lexema, id) == 0) {
			auxRow->token = malloc(sizeof(char) * strlen(newToken));
			strcpy(auxRow->token, newToken);
		}
		auxRow = auxRow->next;
	}
}

int getLineToken(Table* table, char id[]) {
	Row *auxRow;

	auxRow = (Row*)malloc(sizeof(Row));
	auxRow = table->first;

	while (auxRow != NULL) {
		if (strcmp(auxRow->lexema, id) == 0) {
			return auxRow->coords->line;
		}
		auxRow = auxRow->next;
	}

	return 0;
}

void initializeVariableOnCode(Table* table, char id[], char* type) {
	manipulateOutputFile(outputFileName, appendContent, ".line ");
	manipulateOutputFile(outputFileName, appendContent, intToString((getLineToken(table, id))));
	manipulateOutputFile(outputFileName, appendContent, "\n");

	if (! getTokenVarNumber(table, id)) {
		// Variable does not exists yet
		Row *auxRow;

		auxRow = (Row*)malloc(sizeof(Row));
		auxRow = getToken(table, id);

		auxRow->varNumber = ++numberOfTokensAdded;
		
		if (strcmp(type, "i")) {
			changeTokenOnRow(table, id, "int");
		} else if (strcmp(type, "f")) {
			changeTokenOnRow(table, id, "float");
		}
		char* toBeStored = malloc(sizeof(char) + strlen("const_0\n") + sizeof(char) + strlen("store") + strlen(intToString(numberOfTokensAdded)) + 2);
		strcat(toBeStored, type);
		strcat(toBeStored, "const_0\n");
		strcat(toBeStored, type);
		strcat(toBeStored, "store ");
		strcat(toBeStored, intToString(numberOfTokensAdded));
		strcat(toBeStored, "\n");
		manipulateOutputFile(outputFileName, appendContent, toBeStored);
	} else {
		printf("Variable already exists\n");
	} 
}

int getVarType(Table* table, char id[]) {
	if (getTokenVarNumber(table, id)) {
		Row* token = getToken(table, id);
		if (strcmp(token->token, "int")) {
			return 1;
		} else if (strcmp(token->token, "float")) {
			return 2;
		}
	}

	printf("ATRIBUICAO DE VARIAVEL NAO INICIALIZADA\n");
	
	return 0;
}

void writeIntOnCode(int value) {
	char* fileContent = malloc(sizeof(strlen("ldc ") + strlen(intToString(value)) + 2));
	memset(fileContent, '\0', strlen(fileContent) + 1);
	strcpy(fileContent, "ldc ");
	strcat(fileContent, intToString(value));
	strcat(fileContent, "\n\0");
	manipulateOutputFile(outputFileName, appendContent, fileContent);
	free(fileContent);
}

void writeFloatOnCode(float value) {
	char* buffer = malloc(sizeof(char) * numOfDigits((int) value) + 2);
	gcvt((double) value, numOfDigits((int) value) + 2, buffer);
	char* fileContent = malloc(sizeof(strlen("ldc ") + strlen(buffer) + 2));
	memset(fileContent, '\0', strlen(fileContent) + 1);
	strcpy(fileContent, "ldc ");
	strcat(fileContent, buffer);
	strcat(fileContent, "\n\0");
	manipulateOutputFile(outputFileName, appendContent, fileContent);
	free(fileContent);
}

void pushIntToVariableOnCode(Table* table, char id[]) {
	if (getTokenVarNumber(table, id)) {
		manipulateOutputFile(outputFileName, appendContent, "istore ");
		manipulateOutputFile(outputFileName, appendContent, intToString(getTokenVarNumber(table, id)));
		manipulateOutputFile(outputFileName, appendContent, "\n");
	} else {
		printf("Variable does not exists\n");
	}
}

void pushFloatToVariableOnCode(Table* table, char id[]) {
	if (getTokenVarNumber(table, id)) {
		manipulateOutputFile(outputFileName, appendContent, "fstore ");
		manipulateOutputFile(outputFileName, appendContent, intToString(getTokenVarNumber(table, id)));
		manipulateOutputFile(outputFileName, appendContent, "\n");
	} else {
		printf("Variable does not exists\n");
	}
}

int writeRelationalOpOnCode(char* op, char* type) {
	incrementLabel();
	char* fileContent = malloc(sizeof(char) * 20);
	strcpy(fileContent, "if_");
	strcat(fileContent, type);
	strcat(fileContent, "cmp");
	char* opt = malloc(sizeof(char) * 3); 
	if (strcmp(op, ">") == 0) {
		strcpy(opt, "gt");
	} else	if (strcmp(op, ">=") == 0) {
		strcpy(opt, "ge\0");
	} else	if (strcmp(op, "<") == 0) {
		strcpy(opt, "lt\0");
	} else	if (strcmp(op, "<=") == 0) {
		strcpy(opt, "le\0");
	} else	if (strcmp(op, "==") == 0) {
		strcpy(opt, "eq\0");
	} else	if (strcmp(op, "!=") == 0) {
		strcpy(opt, "ne\0");
	}
	fileContent = realloc(fileContent, sizeof(char) * (strlen(fileContent) + strlen(opt) + 2));
	strcat(fileContent, opt);
	free(opt);
	strcat(fileContent, " ");
	fileContent = realloc(fileContent, strlen(fileContent) + 1);
	manipulateOutputFile(outputFileName, appendContent, fileContent);
	free(fileContent);

	return labelNum;
}

void writeLabelOnCode(int label) {
	manipulateOutputFile(outputFileName, appendContent, "L_");
	manipulateOutputFile(outputFileName, appendContent, intToString(label));
}

void writeLabel(int label) {
	writeLabelOnCode(label);
	manipulateOutputFile(outputFileName, appendContent, "\n");
}

void writeFullLabelOnCode(int label) {
	manipulateOutputFile(outputFileName, appendContent, "L_");
	manipulateOutputFile(outputFileName, appendContent, intToString(label));
	manipulateOutputFile(outputFileName, appendContent, ":\n");
}

void writeGoToOnCode(int label) {
	manipulateOutputFile(outputFileName, appendContent, "goto ");
}

void labelAndGoToOnCode(int label) {
	manipulateOutputFile(outputFileName, appendContent, " ");
	writeLabelOnCode(label);
	writeGoToOnCode(label);
	manipulateOutputFile(outputFileName, appendContent, "\n");
}

void writeOpOnCode(char op, char type) {
	char* operation = malloc(sizeof(char));
	memset(operation, '\0', strlen(operation) + 1);
	operation[0] = type;
	if (op == '+') {
		operation = realloc(operation, sizeof(char) * strlen("add\n") + 1);
		strcat(operation, "add\n");
	} else if (op == '-') {
		operation = realloc(operation, sizeof(char) * strlen("sub\n") + 1);
		strcat(operation, "sub\n");
	} else if (op == '*') {
		operation = realloc(operation, sizeof(char) * strlen("mul\n") + 1);
		strcat(operation, "mul\n");
	} else if (op == '/') {
		operation = realloc(operation, sizeof(char) * strlen("div\n") + 1);
		strcat(operation, "div\n");
	} else if (op == '&') {
		operation = realloc(operation, sizeof(char) * strlen("div\n") + 1);
		strcat(operation, "and\n");
	} else if (op == '|') {
		operation = realloc(operation, sizeof(char) * strlen("div\n") + 1);
		strcat(operation, "or\n");
	}
	
	manipulateOutputFile(outputFileName, appendContent, operation);
	free(operation);
}

int incrementLabel() {
	return labelNum++;
}

int numOfDigits(int num) {
    if (num == 0) return 1;
    return (float) floor(log10 (abs (num))) + 1;
}

int writeIf() {
	int label = incrementLabel();
	manipulateOutputFile(outputFileName, appendContent, "if_icmpeq L_");
	manipulateOutputFile(outputFileName, appendContent, intToString(label));

	return label;
}

char* intToString(int num) {
	char* buffer = malloc(sizeof(char) * numOfDigits(num));

	sprintf(buffer, "%d", num);

	return buffer;
}
