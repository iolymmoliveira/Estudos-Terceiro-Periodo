#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");

    char vogal;
	
	printf("Informe uma vogal: ");
    fflush(stdin);
    scanf("%c", &vogal);

    if (vogal == 'A' || vogal == 'E' || vogal == 'I' || vogal == 'O' || vogal == 'U') {
        printf("É uma vogal.");
    } else {
        printf("NÃO é uma vogal.");
    }
        
	system("pause");
    return 0;
}
