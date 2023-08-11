#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void hello();

int main() {
	setlocale(LC_ALL, "");
	
	hello();
			    
	system("pause");
    return 0;
}

void hello() {
	printf("My first program in C.\n");
}
