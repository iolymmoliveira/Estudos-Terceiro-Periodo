#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "");

	float peso, engordar, emagrecer;

	printf("Informe seu peso em Kg \n");
	fflush(stdin);
	scanf("%f", &peso);

	engordar = peso * 1.15;
	emagrecer = peso * 0.8;

	printf("Peso informado: kg %.2f \n", peso);
	printf("Peso se engordar: kg %.2f \n", engordar);
	printf("Peso se emagrecer: kg %.2f \n", emagrecer);
	
	system("pause");
    return 0;
}
