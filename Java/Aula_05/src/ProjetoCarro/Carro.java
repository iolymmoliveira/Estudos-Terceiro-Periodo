package ProjetoCarro;

public class Carro {
	
	public double preco;
	public String cor;
	public int    potencia;
	public String motor;
	public String marca;
	public String modelo;
	public int    ano;
	
	public void mostrarCarro() {
		System.out.println("Preço: R$ " + preco);
		System.out.println("Cor: " + cor);
		System.out.println("Potência: " + potencia);
		System.out.println("Motor: " + motor);
		System.out.println("Marca: " + marca);
		System.out.println("Modelo " + modelo);
		System.out.println("Ano: " + ano);
		System.out.println("");
	}
}
