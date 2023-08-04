package exercicios;

import java.util.Scanner;

public class Ex01 {

	public static void main(String[] args) {
		
		int   idade, acumT = 0, acumM = 0, acumF = 0;
		int   somaIdadeM = 0, somaIdadeF = 0;
		char  sexo;
		float media, mediaM, mediaF;
		
		Scanner teclado = new Scanner(System.in);
		
		for (int i = 0; i <10; i++) {
			System.out.println("Informe sua idade:");
			idade = teclado.nextInt();
			System.out.println();
			
			System.out.println("Informe seu sexo:");
			sexo = teclado.next().charAt(0);
			System.out.println();
			
			acumT = acumT + idade;
			
			if(sexo == 'M') {
				acumM = acumM + 1;
				somaIdadeM = somaIdadeM + idade;
			} else {
				acumF = acumF + 1;		
				somaIdadeF = somaIdadeF + idade;
			}
		}
		
		media = acumT/10;
		mediaM = somaIdadeM/acumM;
		mediaF = somaIdadeF/acumF;
		
		System.out.printf("Média de Idade de Todos os alunos: %.2f \n" , media);
		System.out.printf("Média de Idade de pessoas do sexo Feminino: %.2f \n" , mediaF);
		System.out.printf("Média de Idade de pessoas do sexo Masculino: %.2f \n" , mediaM);
		
		teclado.close();
	}

}
