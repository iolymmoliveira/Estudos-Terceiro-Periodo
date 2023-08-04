#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");

    float saldo_inicial, total_debitos, total_creditos, saldo_final;
	
	printf("Informe seu saldo bancário inicial: ");
    fflush(stdin);
    scanf("%c", &saldo_inicial);

	printf("Informe o total de débitos: ");
    fflush(stdin);
    scanf("%c", &total_debitos);

    printf("Informe o total de créditos: ");
    fflush(stdin);
    scanf("%c", &total_creditos);

    saldo_final = saldo_inicial + total_creditos - total_debitos ;

    if (saldo_final > 0) {
        printf("Saldo Positivo em R$ %f .", saldo_final);
    } else if (saldo_final < 0) {
        printf("Saldo Negativo em R$ %f .", saldo_final);
    } else {
        printf("Saldo Zerrooo.");
    }
        
	system("pause");
    return 0;
}
