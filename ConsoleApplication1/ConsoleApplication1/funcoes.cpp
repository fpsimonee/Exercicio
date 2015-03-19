/*

Calculos matematicos do exercio 3.46 Livro C Como programar

*/
#include "stdafx.h"
#include"funcoes.h"
#include "math.h"

long fatorial(int n){
	if (n == 1 || n == 0)
		return n;
	else
		return n*(fatorial(n - 1));
}

long double calculo_e(int term){
	// formula de Taylor e = 1/n!

	long double result = 0.0; 

		for (int i = 1; i <= term; i++){
			result += (1.0 / fatorial(i));
		}
	

	return result+1.0;
}

long double calculo_e_elevado_x(double x,int nterm){
	// formula de Taylor e elevado a x = 1 + x/x!

	double result = 0;

	if (x == 0){
		return result = 1;
	}
	else{
		for (int i = 1; i <= nterm; i++){
			result += (pow(x,i) / fatorial(i));
		}
		return result + 1;
	}

	
}