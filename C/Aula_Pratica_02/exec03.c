#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "");

	float valor_litro;
	float valor_abastecer;
	float litros;

	printf("Informe o valor a abastecer: R$ \n");
	fflush(stdin);
	scanf("%f", &valor_abastecer);

	printf("Informe o valor do litro: R$ \n");
	fflush(stdin);
	scanf("%f", &valor_litro);

	litros = valor_abastecer / valor_litro ;

	printf("Litros abastecidos: R$ %.2f \n", litros);
	
	system("pause");
    return 0;
}
