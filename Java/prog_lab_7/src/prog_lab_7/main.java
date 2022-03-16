package prog_lab_7;

public class main {
	public static void main(String args[]) throws Exception {
		point3d pt1 = new point3d();
		point3d pt2 = new point3d();
		pt2.init(1, 2, 3);//перегрузка метода базового класса в производном с вызовом метода базового класса
		double x = pt1.distance(pt2);//перегрузка метода базового класса в производном без вызова метода базового класса
		System.out.println("Расстояние между точками " + pt1.toString() + " и " + pt2.toString() + " = " + x);//метод toString
		circle circle1 = new circle(1, 1, 3);//в конструкторе производного класса с параметрами вызов конструктора базового класса
		circle circle2 = new circle();
		circle2 = circle1.clone();//глубокое/поверхностное клонирование
		System.out.println("Объекты до изменения");
		circle1.vivod();
		circle2.vivod();
		circle2.vvod();
		System.out.println("Объекты после изменения второго");
		circle1.vivod();
		circle2.vivod();
   }
}