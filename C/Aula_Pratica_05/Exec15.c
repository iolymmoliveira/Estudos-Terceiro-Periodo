#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int quad(int x);

int main() {
	setlocale(LC_ALL, "");
	
	int num, quadrado;
	
	printf("---QUADRADO---\n");
	
	printf("Informe um número: \n");
	scanf("%d", &num);
	
	printf("O quadrado de %d é: %d. \n", num, quad(num));
	
	system("pause");
    return 0;
}

int quad(x) {
	int quadrado = x * x;  //Escopo local
	return quadrado;
}
