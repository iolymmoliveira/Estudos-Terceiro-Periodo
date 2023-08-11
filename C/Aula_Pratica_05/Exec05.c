#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int multi();

int main() {
	setlocale(LC_ALL, "");
	int res;
	
	printf("O resultado é %d.\n", multi());
			    
	system("pause");
    return 0;
}

int multi() {
	int res = 10 * 9;
	return res;
}

//6) Resposta: Não, pois as duas estão declaradas localmente.
