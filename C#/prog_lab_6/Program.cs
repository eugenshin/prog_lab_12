using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
			point3d pt1 = new point3d();
			point3d pt2 = new point3d();
			pt2.init(1, 2, 3);//перегрузка метода базового класса в производном с вызовом метода базового класса
			double x = pt1.distance(pt2);//перегрузка метода базового класса в производном без вызова метода базового класса
			Console.WriteLine("Расстояние между точками " + pt1.toString() + " и " + pt2.toString() + " = " + x);//метод toString
			circle circle1 = new circle(1, 1, 3);//в конструкторе производного класса с параметрами вызов конструктора базового класса
			circle circle2 = new circle();
			circle2 = circle1.clone();//глубокое/поверхностное клонирование
			Console.WriteLine("Объекты до изменения");
			circle1.vivod();
			circle2.vivod();
			circle2.vvod();
			Console.WriteLine("Объекты после изменения второго");
			circle1.vivod();
			circle2.vivod();
			Console.ReadLine();
        }
    }
}