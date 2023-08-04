#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_brazil");
	
	int num1 = 0;
	int num2 = 100;
	float num_01 = 0;
	float num_02 = 100;

	printf("Número inteiro 1: %d \n", num1);
	printf("Número inteiro 2: %d \n", num2);
	printf("Número float 1: %f \n", num_01);
	printf("Número float 1: %f \n", num_02);
	printf("\n");

	system("pause");
    return 0;
} 