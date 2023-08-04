#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, ""); //Portuguese

	const pi = 3.141516;
	float raio;
	

	printf("Informe o valor do raio:");
	scanf("%f", &raio);

	printf("%f \n", pi * raio * raio);
	printf("\n");

	system("pause");
    return 0;
} 