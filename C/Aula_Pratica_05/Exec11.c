#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma();

int main() {
	setlocale(LC_ALL, "");
	
	int num1, num2, res;
	
	printf("---SOMA---\n");
	
	printf("Informe o primeiro número; \n");
	scanf("%d, &num1");
	
	printf("Informe o segundo número; \n");
	scanf("%d, &num2");
	
	res = soma(num1, num2);
	printf("O valor da soma é: %d. \n", res);
	
	//printf("%d", valor); Vair dar erro, pois está declarado localmente na função soma

	system("pause");
    return 0;
}

int soma(int p_num1, int p_num2) {
	int valor;
	valor = p_num1 + p_num2;
	return valor;
}

//Não consegue acessar as variáveis num1 e num2, pois estas foram declaradas localmento no programa principal. 
//Para corrigi-lo poderia passar os valores das variáveis por parâmetro.
