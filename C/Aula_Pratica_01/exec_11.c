#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int   matricula = 0;
	float valor_mensalidade = 0;

	printf("Informe a matrícula do aluno:");
    scanf("%d", &matricula);

	printf("Informe o valor da mensalidade R$:");
    scanf("%f", &valor_mensalidade);

	printf("\n");
	printf("O aluno %d paga mensalmente R$ %.2f de mensalidade. \n", matricula, valor_mensalidade);
	printf("\n");

	system("pause");
    return 0;
}