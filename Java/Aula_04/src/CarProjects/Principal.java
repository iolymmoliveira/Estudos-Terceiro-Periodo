package CarProjects;

public class Principal {

	public static void main(String[] args) {

		Carro carro01 = new Carro();
		Carro carro02 = new Carro();
		
		carro01.ano    = 2015;
		carro01.preco  = 68000;
		carro01.modelo = "Honda City";
		
		carro02.ano    = 2023;
		carro02.preco  = 100000;
		carro02.modelo = "Mobi";
		
		System.out.println("Ano: " + carro01.ano);
		System.out.printf("Preço R$ %.2f \n", carro01.preco);
		System.out.println("Modelo: " + carro01.modelo);
		System.out.println("");
		
		System.out.println("Ano: " + carro02.ano);
		System.out.printf("Preço R$ %.2f \n", carro02.preco);
		System.out.println("Modelo: " + carro02.modelo);
		System.out.println("");
	}

}
