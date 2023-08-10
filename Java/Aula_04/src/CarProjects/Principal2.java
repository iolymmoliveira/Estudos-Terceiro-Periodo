package CarProjects;

import java.util.Scanner;

public class Principal2 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);

		Carro carro01 = new Carro();
		
		System.out.println("Informe o Ano do carro:");
		carro01.ano = teclado.nextInt();
		
		System.out.println("Informe o Preço do carro em R$:");
		carro01.preco = teclado.nextDouble();
		teclado.nextLine();	
		
		System.out.println("Informe o Modelo do carro:");
		carro01.modelo = teclado.nextLine();
		System.out.println("");
	
		System.out.println("Ano: " + carro01.ano);
		System.out.printf("Preço R$ %.2f \n", carro01.preco);
		System.out.println("Modelo: " + carro01.modelo);
		System.out.println("");
		
		teclado.close();
	}

}
