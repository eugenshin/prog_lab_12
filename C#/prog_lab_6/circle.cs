using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class circle : figure , inputoutput
    {
        private double radius;
        public circle() : base(1) 
        {
        }
        public circle(double x, double y, double r) : base(1)
        {
            pt[0].init(x, y);
            radius = r;
        }
        public void vvod()
        {
            Console.WriteLine("Введите координаты центра окружности.");
            pt[0].vvod();
            Console.WriteLine("Введите длинну радиуса окружности.");
            while (!double.TryParse(Console.ReadLine(), out radius))
                Console.WriteLine("Радиус введен неверно.");
        }
        public void vivod()
        {
            Console.Write($"Центр окружности: ");
            pt[0].vivod();
            Console.Write($" Радиус = {radius}");
            Console.WriteLine();
        }
        override public double square()
        {
            return radius*radius*Math.PI;
        }
        override public double per()
        {
            return 2*Math.PI*radius;
        }
        public circle clone()
        {
            circle newcircle = new circle();
            newcircle.pt[0] = new point();
            newcircle.pt[0] = pt[0].clone();
            newcircle.radius = radius;
            return newcircle;
        }
    }
}
