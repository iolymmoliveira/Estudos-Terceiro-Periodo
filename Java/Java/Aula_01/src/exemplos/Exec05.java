package exemplos;

import java.util.Scanner;

public class Exec05 {

	public static void main(String[] args) {
		
		Scanner teclado = new Scanner(System.in);

		double valorProduto;
		double desconto;
		
		System.out.println("Insira o valor de um produto da loja R$:");
		valorProduto = teclado.nextDouble();
		
		System.out.println();
		
		desconto = valorProduto * 0.06;
		
		System.out.printf("Valor do Produto R$ %.2f %n", valorProduto);
		System.out.printf("O desconto de 6%% para o produto é de R$ %.2f", desconto);
		
		teclado.close();

	}

}
