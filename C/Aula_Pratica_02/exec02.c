#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "");

	float horas_trabalhadas;
	float valor_hora;
	float salario;

	printf("Informe a quantidade de horas trabalhadas: \n");
	fflush(stdin);
	scanf("%f", &horas_trabalhadas);

	printf("Informe o valor da hora trabalhada: \n");
	fflush(stdin);
	scanf("%f", &valor_hora);

	salario = horas_trabalhadas * valor_hora;

	printf("Salário a ser recebido: R$ %.2f \n", salario);
	
	system("pause");
    return 0;
}
