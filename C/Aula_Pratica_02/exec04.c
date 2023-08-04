#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "");

	float salario;
	float salario_aumento;
	float salario_liquido;

	printf("Informe seu salário: R$ \n");
	fflush(stdin);
	scanf("%f", &salario);

	salario_aumento = salario * 1.15;
	salario_liquido = salario_aumento * 0.92;

	printf("Salário inicial: R$ %.2f \n", salario);
	printf("Salário com aumento: R$ %.2f \n", salario_aumento);
	printf("Salário final: R$ %.2f \n", salario_liquido);
	
	system("pause");
    return 0;
}
