package ProjetoConta;

public class Conta {

	public int    numero;
	public double saldo;
	
	public void creditaSaldo(double credito) {
		saldo += credito;
	}
	
	public void debitaSaldo(double debito) {
		saldo -= debito;
	}
	
//	public void mostra() {
//		System.out.println("Número: " + numero);
//		System.out.println("Saldo R$: " + saldo);
//		System.out.println("");
//	}

	@Override
	public String toString() {
		return "Conta [numero=" + numero + ", saldo=" + saldo + "]";
	}
	
	
}
