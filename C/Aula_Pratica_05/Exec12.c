#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int quad(int x);

int main() {
	setlocale(LC_ALL, "");
	
	int num, quadrado;
	
	printf("---QUADRADO---\n");
	
	printf("Informe um n�mero: \n");
	scanf("%d", &num);
	
	quadrado = quad(num);
	printf("O quadrado de %d �: %d. \n", num, quadrado);
	
	system("pause");
    return 0;
}

int quad(x) {
	return x * x;
}
