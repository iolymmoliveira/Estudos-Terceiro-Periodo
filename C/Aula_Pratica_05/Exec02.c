#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void by();

int main() {
	setlocale(LC_ALL, "");
	
	by();
			    
	system("pause");
    return 0;
}

void by() {
	printf("Encerrando meu programa em C.\n");
}
