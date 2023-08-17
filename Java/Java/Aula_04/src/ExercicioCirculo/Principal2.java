package ExercicioCirculo;

import java.util.Scanner;

public class Principal2 {

	public static void main(String[] args) {

		Scanner leitura = new Scanner(System.in);
		
		Circulo circ01 = new Circulo();
		Circulo circ02 = new Circulo();
		
		System.out.println("Informe o valor de x:");
		circ01.x = leitura.nextInt();		
		System.out.println("Informe o valor de y:");
		circ01.y = leitura.nextInt();				
		System.out.println("Informe o raio:");
		circ01.raio = leitura.nextDouble();
		leitura.nextLine();
		System.out.println("Informe a cor: ");
		circ01.cor = leitura.nextLine();
		System.out.println("");
		
		System.out.println("Informe informações para o circ2:");
		System.out.println("Informe o valor de x:");
		circ02.x = leitura.nextInt();		
		System.out.println("Informe o valor de y:");
		circ02.y = leitura.nextInt();				
		System.out.println("Informe o raio:");
		circ02.raio = leitura.nextDouble();
		leitura.nextLine();
		System.out.println("Informe a cor: ");
		circ02.cor = leitura.nextLine();
		System.out.println("");
		
		System.out.println("---------------");
		System.out.println("");
	
		System.out.println("x: " + circ01.x);
		System.out.println("y: " + circ01.y);
		System.out.println("raio: " + circ01.raio);
		System.out.println("cor: " + circ01.cor);
		System.out.println("");
		System.out.println("---------------");
		System.out.println("");
	
		System.out.println("x: " + circ02.x);
		System.out.println("y: " + circ02.y);
		System.out.println("raio: " + circ02.raio);
		System.out.println("cor: " + circ02.cor);
		System.out.println("");
		System.out.println("---------------");
		System.out.println("");
		
		leitura.close();
	}

}
