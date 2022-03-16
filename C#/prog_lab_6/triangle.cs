using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class triangle : figure , inputoutput
    {
        public triangle() : base(3)
        {
        }
        public void vvod()
        {
            pt[0].vvod();
            pt[1].vvod();
            pt[2].vvod();
        }
        public void vivod()
        {
            Console.Write($"Первая точка: ");
            pt[0].vivod();
            Console.Write($" Вторая точка: ");
            pt[1].vivod();
            Console.Write($" Третья точка: ");
            pt[2].vivod();
            Console.WriteLine();
        }
        override public double square()
        {
            return Math.Abs((pt[1].getx() - pt[0].getx()) * (pt[2].gety() - pt[0].gety()) - (pt[2].getx() - pt[0].getx()) * (pt[1].gety() - pt[0].gety())) / 2;
        }
        override public double per()
        {
            return pt[0].distance(pt[1]) + pt[1].distance(pt[2]) + pt[2].distance(pt[0]);
        }
    }
}
