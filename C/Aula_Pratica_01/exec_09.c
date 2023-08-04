#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int codigo = 0;
	int idade = 0;
	float peso = 0;
	float altura = 0;

	printf("Informe o código do competidor:");
    scanf("%d", &codigo);

	printf("Informe a idade do competidor:");
    scanf("%d", &idade);

	printf("Informe o peso do competidor:");
    scanf("%f", &peso);

	printf("Informe a altura do competidor:");
    scanf("%f", &altura);

	printf("\n");
	printf("Dados do Competidor:\n");
	printf("Código: %d  \n", codigo);
	printf("Idade: %d  \n", idade);
	printf("Peso: %f  \n", peso);
	printf("Altura: %f  \n", altura);
	printf("\n");

	system("pause");
    return 0;
}