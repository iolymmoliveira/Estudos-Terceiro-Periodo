package Exercicios;

import java.util.Scanner;

public class Exec01 {

	public static void main(String[] args) {

		Scanner teclado = new Scanner(System.in);
		
		int    idade;
		String resultado;
		
		System.out.println("Informe a idade: ");
		idade = teclado.nextInt();
		
		resultado = (idade >= 18) ? "MAIOR de idade" : "MENOR de idade";
		
		System.out.println(resultado);

		teclado.close();
	}

}
