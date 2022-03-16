package prog_lab_7;
import java.util.Scanner;

public class circle extends figure implements inputoutput , Cloneable{
	double radius;
	
	public circle() {
		super(1);
	}
	
	public circle(double x, double y, double r) {
		super(1);
		pt[0].x = x;
		pt[0].y = y;
		radius = r;
	}
	
	public void vvod() {
		this.pt[0].vvod();
		Scanner in = new Scanner(System.in);
		this.radius = in.nextDouble();
	}
	
	public void vivod()	{
		System.out.printf("(%f; %f;   %f)\n", this.pt[0].getx(), this.pt[0].gety(), this.radius);
	}

	public double square() {
            return radius*radius*Math.PI;
	}
	
	public double per() {
            return 2*Math.PI*radius;
	}

	@Override
	public circle clone() throws CloneNotSupportedException{//глубокое клонирование
		circle newcircle = (circle) super.clone();
		newcircle.pt = new point[1];
		newcircle.pt[0] = pt[0].clone();
		return newcircle;
	}
}