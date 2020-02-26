#include"math.h"

double squareFunc(double base){
	return powerFunc(base,2);
}

double powerFunc(double base, int exp){
	double product=1;
	int i;
	for(i=0;i<exp;i++){
		product*=base;
	}
	return product;
}
