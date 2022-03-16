package prog_lab_7;

public class triangle extends figure implements inputoutput{
	
	public triangle() {
		super(3);
	}
	
	public void vvod() {
		this.pt[0].vvod();
		this.pt[1].vvod();
		this.pt[2].vvod();
	}
	
	public void vivod()	{
		System.out.printf("(%f; %f;   %f; %f	%f; %f)\n", this.pt[0].getx(), this.pt[0].gety(), this.pt[1].getx(), this.pt[1].gety(), this.pt[2].getx(), this.pt[2].gety());
	}
	
	public double square() {
		return Math.abs((pt[1].getx() - pt[0].getx()) * (pt[2].gety() - pt[0].gety()) - (pt[2].getx() - pt[0].getx()) * (pt[1].gety() - pt[0].gety())) / 2;
	}

	public double per() {
		return pt[0].distance(pt[1]) + pt[1].distance(pt[2]) + pt[2].distance(pt[0]);
	}
}
