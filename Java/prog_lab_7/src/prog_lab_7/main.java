package prog_lab_7;

public class main {
	public static void main(String args[]) throws Exception {
		point3d pt1 = new point3d();
		point3d pt2 = new point3d();
		pt2.init(1, 2, 3);//���������� ������ �������� ������ � ����������� � ������� ������ �������� ������
		double x = pt1.distance(pt2);//���������� ������ �������� ������ � ����������� ��� ������ ������ �������� ������
		System.out.println("���������� ����� ������� " + pt1.toString() + " � " + pt2.toString() + " = " + x);//����� toString
		circle circle1 = new circle(1, 1, 3);//� ������������ ������������ ������ � ����������� ����� ������������ �������� ������
		circle circle2 = new circle();
		circle2 = circle1.clone();//��������/������������� ������������
		System.out.println("������� �� ���������");
		circle1.vivod();
		circle2.vivod();
		circle2.vvod();
		System.out.println("������� ����� ��������� �������");
		circle1.vivod();
		circle2.vivod();
   }
}