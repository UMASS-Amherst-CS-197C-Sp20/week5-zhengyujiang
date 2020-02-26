#include<stdio.h>

enum flag {CHAR='C',INT='I',FLOAT='F'};

union value{
	char charVal;
	int intVal;
	float floatVal;
};

typedef struct{
	enum flag flag;
	union value val;
} parserValue;

void print(parserValue input);

int read(FILE * inputFile, parserValue * inputPTR);
