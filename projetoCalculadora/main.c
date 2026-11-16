#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma( int v1, int v2 ){
	return v1+v2;
}
int subtracao ( int v1 , int v2 ){
	return v1-v2;	
}

float divisao(float v1, float v2){
	if (v2==0)
	return NAN;
	return v1/v2;
}