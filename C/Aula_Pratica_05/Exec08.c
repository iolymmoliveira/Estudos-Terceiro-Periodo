#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float multi();

int main() {
	setlocale(LC_ALL, "");
	
	printf("O resultado é %f. \n", multi());

	system("pause");
    return 0;
}

float multi() {
	float res = 5000 * 0.09;
	return res;
}

