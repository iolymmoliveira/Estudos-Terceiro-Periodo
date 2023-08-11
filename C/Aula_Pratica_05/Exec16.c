#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma(int p_num1, int p_num2);
int subtrai(int p_num1, int p_num2);
int multiplica(int p_num1, int p_num2);
float divide(int p_num1, int p_num2);

int main(){
	
	int num1, num2;
	float res;
	char op;
	
	printf("\n Informe a operação desejada: \n");
	printf("+ - / * \n");
	printf("# para SAIR \n");
	scanf("%c", &op);
	
	while(op != '#') {
		printf("Informe o primeiro número:");
		fflush(stdin);
		scanf("%d", &num1);
		
		printf("Informe o segundo número:");
		fflush(stdin);
		scanf("%d", &num2);
		
		if(op == '+'){
			res = soma(num1, num2);
		} else {
			if(op == '-'){
				res = subtrai(num1, num2);
			}
			else {
				if (op == '*') {
					res = multiplica(num1, num2);
				}
				else {
					res = divide(num1, num2);
				}
			} 
		}
		
		printf("%.2f \n", res);
		
		printf("\n\n Informe a operação desejada: \n");
		fflush(stdin);
		printf("+ - / * \n");
		printf("# para SAIR \n");
		scanf("%c", &op);
	}
	return 0;
}

int soma(int p_num1, int p_num2){
	return p_num1 + p_num2;	
}

int subtrai(int p_num1, int p_num2){
	return p_num1 - p_num2;		
}

int multiplica(int p_num1, int p_num2){
		return p_num1 * p_num2;	
}

float divide(int p_num1, int p_num2){
		return p_num1 / p_num2;	
}
