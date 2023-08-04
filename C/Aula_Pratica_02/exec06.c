#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "");

	float dia1, dia2, dia3, dia4, dia5, acumula, media;

	printf("Informe a quantidade de horas no dia 1:");
	fflush(stdin);
	scanf("%f", &dia1);

	printf("Informe a quantidade de horas no dia 2:");
	fflush(stdin);
	scanf("%f", &dia2);

	printf("Informe a quantidade de horas no dia 3:");
	fflush(stdin);
	scanf("%f", &dia3);

	printf("Informe a quantidade de horas no dia 4:");
	fflush(stdin);
	scanf("%f", &dia4);

	printf("Informe a quantidade de horas no dia 5:");
	fflush(stdin);
	scanf("%f", &dia5);

	acumula = dia1 + dia2 +  dia3 + dia4 + dia5;
	media = acumula / 5;

	printf("Média de horas trabalhadas: %2.f \n", media);
	
	system("pause");
    return 0;
}
