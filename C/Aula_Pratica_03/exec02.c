#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");

    int matricula1, idade1;
    int matricula2, idade2;
	
	printf("Informe sua matrícula: ");
    fflush(stdin);
    scanf("%d", &matricula1);

    printf("Informe sua idade: ");
    fflush(stdin);
    scanf("%d", &idade1);

	printf("Informe sua matrícula: ");
    fflush(stdin);
    scanf("%d", &matricula2);

    printf("Informe sua idade: ");
    fflush(stdin);
    scanf("%d", &idade2);

    if (idade2 > idade1) {
        printf("A pessoa 2 de matrícula %d e idade %d é mais velha.", matricula2, idade2);
    } else {
        printf("A pessoa 1 de matrícula %d e idade %d é mais velha.", matricula1, idade1);
    }
        
	system("pause");
    return 0;
}
