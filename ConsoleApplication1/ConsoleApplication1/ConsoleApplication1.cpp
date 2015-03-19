// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "funcoes.h"


int _tmain(int argc, _TCHAR* argv[])
{   
	int n = 0;
	long double result=0;
	printf("Digite um numero para o calculo do fatorial: ");
	scanf_s("%d", &n,10);
	result = fatorial(n);
	printf("O fatorial de %d eh = %f",n,result);
    
	result =  0;
	int n1 = 0;
	printf("\n <<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");
	printf("Digite uma quantidade de termos: ");
	scanf_s("%d", &n1,10);
	result = calculo_e(n1);
    printf("O valor da serie de Taylor para %d eh = %e", n1, result);

	result = 0;
	double n2 = 0;
	int nterm = 0;
	printf("\n <<<<<<<<<<<<<<<<<<<<<< Calculo e elevado a x >>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");
	printf("Digite um valor x: ");
	scanf_s("%he", &n2,10);
	printf("Digite o numero de termos: ");
	scanf_s("%d", &nterm,10);
	result = calculo_e_elevado_x(n2,nterm);
	printf("O valor de e elevado a %g eh = %e",n2, result);

	fflush(stdin);
	getchar();
	return 0;
}

