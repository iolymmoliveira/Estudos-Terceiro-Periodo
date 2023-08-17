package exemplos;

import java.util.Scanner;

public class Exe03 {

	public static void main(String[] args) {
		
		int    intNum;
		float  fltNum;
		double dblNum;
		String strPalavra, strFrase;
		char   chrCaracter;
		
		Scanner teclado = new Scanner(System.in);

		System.out.println("Informe um número inteiro:");
		intNum = teclado.nextInt();
		
		System.out.println("Informe um número float:");
		fltNum = teclado.nextFloat();
		
		System.out.println("Informe um número double:");
		dblNum = teclado.nextDouble();
		
		teclado.nextLine();						//esvaziar o buffer do teclado
		
		System.out.println("Informe uma palavra:");
		strPalavra = teclado.nextLine();
		
		System.out.println("Informe uma frase:");
		strFrase = teclado.nextLine();
		
		System.out.println("Informe um caracter:");
		chrCaracter = teclado.next().charAt(0);
		
		System.out.println();
		System.out.println("intNum: " + intNum);
		System.out.println("fltNum: " + fltNum);
		System.out.println("dblNum: " + dblNum);
		System.out.println("strPalavra: " + strPalavra);
		System.out.println("strFrase " + strFrase);
		System.out.println("chrCaracter: " + chrCaracter);
		
		teclado.close();
	}

}
