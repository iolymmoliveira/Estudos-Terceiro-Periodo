package ExercicioCirculo;

public class Principal {

	public static void main(String[] args) {

		Circulo circulo02 = new Circulo();
		Circulo circulo03 = new Circulo();
		Circulo segundo_circulo = new Circulo();
		//Exercício 3
		circulo02.x = 10;
		circulo02.y = 20;
		circulo02.raio = 55;
		
		System.out.println("Exercício 3:");
		System.out.println("------------");
		System.out.println("x: " + circulo02.x);
		System.out.println("y: " + circulo02.y);
		System.out.println("raio: " + circulo02.raio);
		System.out.println("------------");
		System.out.println("");
		
		//Exercício 4
		System.out.println("Exercício 4:");
		System.out.println("------------");
		circulo03.x = -15;
		circulo03.y = 5;
		circulo03.raio = 10;
		
		System.out.println("x: " + circulo03.x);
		System.out.println("y: " + circulo03.y);
		System.out.println("raio: " + circulo03.raio);
		System.out.println("------------");
		System.out.println("");
		
		//Exercício 5
		System.out.println("Exercício 5:");
		System.out.println("------------");
		segundo_circulo.x = 2;
		segundo_circulo.y = 45;
		segundo_circulo.raio = 9;
		
		System.out.println("x: " + segundo_circulo.x);
		System.out.println("y: " + segundo_circulo.y);
		System.out.println("raio: " + segundo_circulo.raio);
		System.out.println("------------");
		System.out.println("");
		
		
		//Exercício 8
		System.out.println("Exercício 8:");
		System.out.println("------------");
		Circulo circ1 = new Circulo();
		circ1.x = 3;
		circ1.y = 3;
		circ1.raio = 6;
		circ1.cor = "Violet";
		circ1.calcularArea();
		System.out.println("8.1: " + circ1.toString()); 
		
		circ1.moverCirculo(4,4);
		circ1.calcularArea();
		System.out.println("8.2: " + circ1.toString()); 
		System.out.println("------------");
		System.out.println("");
	}

}
