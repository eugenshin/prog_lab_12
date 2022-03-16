package prog_lab_7;

public class point3d extends point implements inputoutput{//производный класс
	double z = 0;

	public double distance(point3d sdpoint){//перегрузка метода базового класса в производном классе без вызова метода базового класса
		return Math.sqrt(Math.pow(this.x - sdpoint.x, 2) + Math.pow(this.y - sdpoint.z, 2) + Math.pow(this.y - sdpoint.z, 2));
	}
	
	public void init(double x, double y, double z) {//перегрузка метода базового класса в производном классе с вызовом метода базового класса  
		((point)this).init(x, y);
		this.z = z;
		return;
	}
	@Override
	public String toString() {//метод toString 
		return "point3d [x=" + x + ", y=" + y + ", z=" + z + ", description=" + description + "]";
	}
}