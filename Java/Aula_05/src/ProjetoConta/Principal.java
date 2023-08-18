package ProjetoConta;

public class Principal {

	public static void main(String[] args) {

		Conta conta_01, conta_02, conta_03;
		conta_01 = new Conta();
		conta_02 = new Conta();
		conta_03 = new Conta();
		
		conta_01.numero = 3030;
		conta_01.saldo = 0;
//		conta_01.mostra();
		conta_01.creditaSaldo(500);
//		conta_01.mostra();
		System.out.println(conta_01.toString());
		
		conta_02.numero = 3031;
		conta_02.saldo = 100;
//		conta_02.mostra();
		conta_02.creditaSaldo(200);
//		conta_02.mostra();
		conta_02.debitaSaldo(50);
//		conta_02.mostra();
		System.out.println(conta_02.toString());
		
		conta_03.numero = 3032;
		conta_03.saldo = 1000;
		conta_03.debitaSaldo(500);
//		conta_03.mostra();
		System.out.println(conta_03.toString());
		
	}

}
