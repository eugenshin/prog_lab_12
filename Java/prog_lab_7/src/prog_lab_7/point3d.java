package prog_lab_7;

public class point3d extends point implements inputoutput{//����������� �����
	double z = 0;

	public double distance(point3d sdpoint){//���������� ������ �������� ������ � ����������� ������ ��� ������ ������ �������� ������
		return Math.sqrt(Math.pow(this.x - sdpoint.x, 2) + Math.pow(this.y - sdpoint.z, 2) + Math.pow(this.y - sdpoint.z, 2));
	}
	
	public void init(double x, double y, double z) {//���������� ������ �������� ������ � ����������� ������ � ������� ������ �������� ������  
		((point)this).init(x, y);
		this.z = z;
		return;
	}
	@Override
	public String toString() {//����� toString 
		return "point3d [x=" + x + ", y=" + y + ", z=" + z + ", description=" + description + "]";
	}
}