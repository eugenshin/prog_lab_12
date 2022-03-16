using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class point : inputoutput
    {
        protected double x, y;//модификатор protected
        protected string description = "Empty";//модификатор protected
        public point()
        {
            this.x = this.y = 0;
        }
        public point(double x)
        {
            this.x = this.y = x;
        }
        public point(double x, double y)
        {
            this.x = x;
            this.y = y;
        }
        public double X
        {
            get { return x; }
            set { x = value; }
        }
        public double Y
        {
                get { return y; }
                set { y = value; }
        }
        public string Description {
            get { return description; }
            set { description = value; }
        }
        public void init(double x, double y)
        {
            this.x = x;
            this.y = y;
        }
        public static point operator +(point a, point b)
        {
            point c = new point();
            c.x = a.x + b.x;
            c.y = a.y + b.y;
            return c;
        }
        public static point operator ++(point a)
        {
            point b = new point();
            b.x = a.x + 1;
            b.y = a.y + 1;
            return b;
        }
        public void vvod()
        {
            while (!double.TryParse(Console.ReadLine(), out x))
                Console.WriteLine("Координата x введена неверно.");
            while (!double.TryParse(Console.ReadLine(), out y))
                Console.WriteLine("Координата y введена неверно.");
        }
        public void vivod()
        {
            Console.Write($"x={x}, y={y}");
        }
        public double distance(point sdpoint)
        {
            return Math.Sqrt(Math.Pow(sdpoint.x - x, 2) + Math.Pow(sdpoint.y - y, 2));
        }
        public double getx()
        {
            return x;
        }
        public double gety()
        {
            return y;
        }
        public point clone()
        {
            return new point(x, y);
        }
    }
}
