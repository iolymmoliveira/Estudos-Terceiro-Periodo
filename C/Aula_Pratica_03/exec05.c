#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");

    int idade;
	
	printf("Informe sua idade: ");
    fflush(stdin);
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 65) {
        printf("Esta pessoa POSSUI idade compreendida entre 18 e 65 anos.");
    } else {
        printf("Esta pessoa NÃO possui idade compreendida entre 18 e 65 anos.");
    }
        
	system("pause");
    return 0;
}
