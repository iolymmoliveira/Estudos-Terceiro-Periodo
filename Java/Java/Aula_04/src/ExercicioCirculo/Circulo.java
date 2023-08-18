package ExercicioCirculo;

public class Circulo {
	
	public int          x;
	public int          y;
	public double       raio;
	public String       cor;
	public final double pi = 3.1416;
	public double       area;
	
//	private int    x;
//	private int    y;
//	private double raio;
//	private String cor;
	
	public double calcularArea() {
		area = this.pi * this.raio * this.raio;
		return area;
	}
	
	public void moverCirculo(int x, int y) {
		this.x = x;
		this.y = y;
	}

	@Override
	public String toString() {
		return "Circulo (x=" + x + ", y=" + y + ", raio=" + raio + ", cor=" + cor + ", pi=" + pi + ", area=" + area
				+ ")";
	}
	
	
	
}
