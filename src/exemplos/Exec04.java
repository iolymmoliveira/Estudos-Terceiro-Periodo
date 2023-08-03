package exemplos;

import java.util.Scanner;

public class Exec04 {

	public static void main(String[] args) {
		
		Scanner teclado = new Scanner(System.in);

		int numero;
		int dobro;
		
		System.out.println("Insira um número inteiro.");
		numero = teclado.nextInt();
		
		System.out.println();
		
		dobro = numero * 2;
		
		System.out.println("O dobro de " + numero + " é " + dobro + ".");
		
		teclado.close();
	}
	

}
