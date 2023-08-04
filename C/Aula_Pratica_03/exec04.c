#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");

    int tempo;
    float valor_gasto;
	
	printf("Informe o tempo em que é cliente: ");
    fflush(stdin);
    scanf("%d", &tempo);

    printf("Informe o valor gasto na compra: R$ ");
    fflush(stdin);
    scanf("%f", &valor_gasto);

    if (tempo >= 5) {
        if(valor_gasto > 5000) {
            printf("Desconto de 20%%.");
        } else {
            printf("Desconto de 10%%.");
        }      
    } else {
        printf("Não possui desconto!");
    }
        
	system("pause");
    return 0;
}
