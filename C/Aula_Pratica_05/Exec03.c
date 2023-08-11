#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int multi();

int main() {
	setlocale(LC_ALL, "");
	int res;
	
	res = multi();
	//multi(); // Imprime O resultado é 0.
	
	printf("O resultado é %d.\n", res);
			    
	system("pause");
    return 0;
}

int multi() {
	return 10 * 9;
}
