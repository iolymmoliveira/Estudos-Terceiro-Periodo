package Exercicios;

import java.util.Scanner;

public class Exec03 {

	public static void main(String[] args) {
		
		Scanner teclado = new Scanner(System.in);
		
		int numero;
		
		System.out.println("Informe um n�mero:");	
		numero = teclado.nextInt();
		System.out.println();
		
		switch(numero) {
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 9:
		case 1, 3, 5, 7, 9:
			System.out.println("Este n�mero � �MPAR.");
			break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
			System.out.println("Este n�mero � PAR.");
			break;
		default:
			System.out.println("N�mero inv�lido!");
	}
		
		teclado.close();
		
	}

}
