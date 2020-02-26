#include "dependencies.h"

int main(int argc, char * argv[]){
	FILE * inputFile = fopen("input.txt","r");
	parserValue input;
	while(read(inputFile,&input)!=EOF){
		print(input);
	}
	fclose(inputFile);
	return 0;
}
