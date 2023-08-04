#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");

    int numero;
	
	printf("Informe um número: ");
    fflush(stdin);
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Este é um número PAR.");
    } else {
        printf("Este é um número ÍMPAR.");
    }
        
	system("pause");
    return 0;
}
