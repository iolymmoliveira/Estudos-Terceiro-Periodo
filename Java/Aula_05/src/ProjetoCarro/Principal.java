package ProjetoCarro;

public class Principal {

	public static void main(String[] args) {

		Carro carro_01, carro_02;
		
		carro_01 = new Carro();
		carro_02 = new Carro();
		
		carro_01.preco = 25000;
		carro_01.cor = "Prata";
		carro_01.potencia = 80;
		carro_01.motor = "1.6";
		carro_01.marca = "Wolksvagem";
		carro_01.modelo = "Gol";
		carro_01.ano = 2015;
		
		carro_02.preco = 35000;
		carro_02.cor = "Chumbo";
		carro_02.potencia = 60;
		carro_02.motor = "2.0";
		carro_02.marca = "Kia";
		carro_02.modelo = "Soul";
		carro_02.ano = 2015;
		
		carro_01.mostrarCarro();
		carro_02.mostrarCarro();
	}

}
