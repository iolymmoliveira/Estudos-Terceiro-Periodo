#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");

    float salario;
	
	printf("Informe seu salário: R$ ");
    fflush(stdin);
    scanf("%f", &salario);

    if (salario > 5000) {
        printf("Salário superior a R$ 5.000");
    } else {
        printf("Salário inferior a R$ 5.000");
    }
        
	system("pause");
    return 0;
}
