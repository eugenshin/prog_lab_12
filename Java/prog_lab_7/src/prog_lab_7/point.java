package prog_lab_7;
import java.util.Scanner;

public class point implements inputoutput , Cloneable{
	protected double x, y;//модификатор protected 
	protected String description;//модификатор protected
	
	public point() {
		description = new String();
		x = y = 0;
	}
	
	public point(double x) {
		description = new String();
		this.x = this.y = x;
	}
	
	public point(double x, double y) {
		description = new String();
		this.x = x;
		this.y = y;
	}
	
	public void vvod() {
		Scanner in = new Scanner(System.in);
		this.x = in.nextDouble();
		this.y = in.nextDouble();
	}
	
	public void vivod()	{
		System.out.printf("x=%.3f; y=%.3f", this.x, this.y);
	}

	public double distance(point sdpoint) {
		return Math.sqrt(Math.pow(this.x - sdpoint.x, 2) + Math.pow(this.y - sdpoint.y, 2));
	}
	
	public double getx() {
		return this.x;
	}
	
	public double gety() {
		return this.y;
	}
	
	public void init(double x, double y) {
		this.x = x;
		this.y = y;
		return;
	}
	
	public void descrin() {
		Scanner in = new Scanner(System.in);
		description = in.nextLine();
	}
	
	public void descrout() {
		System.out.println(description);
	}
	
	public int sum() {
		return (int)(x+y);
	}

	@Override
	public String toString() {//метод toString 
		return "point [x=" + x + ", y=" + y + ", description=" + description + "]";
	}	
	
	@Override
	protected point clone() throws CloneNotSupportedException{
		return (point) super.clone();
	}
}