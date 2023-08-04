package Exercicios;

import java.util.Scanner;

public class Exec03 {

	public static void main(String[] args) {
		
		Scanner teclado = new Scanner(System.in);
		
		int numero;
		
		System.out.println("Informe um número:");	
		numero = teclado.nextInt();
		System.out.println();
		
		switch(numero) {
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 9:
		case 1, 3, 5, 7, 9:
			System.out.println("Este número é ÍMPAR.");
			break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
			System.out.println("Este número é PAR.");
			break;
		default:
			System.out.println("Número inválido!");
	}
		
		teclado.close();
		
	}

}
