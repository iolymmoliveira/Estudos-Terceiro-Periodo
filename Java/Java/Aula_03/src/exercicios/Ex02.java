package exercicios;

import java.util.Scanner;

public class Ex02 {

	public static void main(String[] args) {
		
		double soma = 0, media, salario;
		int func, codigo;
		
		Scanner teclado = new Scanner(System.in);
		
		codigo = teclado.nextInt();
		
		while (codigo > 0) {
			System.out.println("Informe seu sal�rio:");
			salario = teclado.nextInt();
			
			soma = soma + salario;
			
			//terminar este exerc�cio
			
			codigo = teclado.nextInt();
		}

	}

}
