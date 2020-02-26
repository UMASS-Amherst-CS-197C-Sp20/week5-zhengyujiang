#include<stdio.h>
#include"math.h"

int main(int argc, char * argv[]){
	double five = 5;
	double twentyFive = squareFunc(five);
	double oneTwentyFive = powerFunc(five,3);
	printf("%f squared is %f\n",five,twentyFive);
	printf("%f cubed is %f\n",five,oneTwentyFive);
	return 0;
}
