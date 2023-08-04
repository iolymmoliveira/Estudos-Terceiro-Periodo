#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade = 0;
	float altura = 0;

	printf("Informe a idade do competidor:");
    scanf("%d", &idade);

	printf("Informe a altura do competidor:");
    scanf("%f", &altura);

	printf("\n");
	printf("Minhas informações:\n");
	printf("Tenho %d anos e %f de altura.\n", idade, altura);
	printf("\n");

	system("pause");
    return 0;
} 