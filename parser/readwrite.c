#include "dependencies.h"

void print(parserValue input){
	switch(input.flag){
		case CHAR:
			printf("%c %c\n",input.flag,input.val.charVal);
		break;
		case INT:
			printf("%c %i\n",input.flag,input.val.intVal);
		break;
		case FLOAT:
			printf("%c %f\n",input.flag,input.val.floatVal);
		break;
	}
}

int read(FILE * inputFile,parserValue * inputPTR){
	if(fscanf(inputFile, "%c", &inputPTR->flag)==EOF){
		return EOF;
	}
	switch(inputPTR->flag){
		case CHAR:
			fscanf(inputFile," %c ",&inputPTR->val.charVal);
		break;
		case INT:
			fscanf(inputFile," %i ",&inputPTR->val.intVal);
		break;
		case FLOAT:
			fscanf(inputFile," %f ",&inputPTR->val.floatVal);
		break;
	}
	return 0;
}
