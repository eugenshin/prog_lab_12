using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class point3d : point
    {
        double z = 0;
        public double distance(point3d pt)
        {//перегрузка метода базового класса в производном классе без вызова метода базового класса
            return Math.Sqrt(Math.Pow(pt.x - x, 2) + Math.Pow(pt.y - y, 2) + Math.Pow(pt.z - z, 2));
        }
        public void init(double x, double y, double z)
        {//перегрузка метода базового класса в производном классе с вызовом метода базового класса  
            ((point)this).init(x, y);
            this.z = z;
            return;
        }
        public String toString()
        {//метод toString 
            return "point3d [x=" + x + ", y=" + y + ", z=" + z + ", description=" + description + "]";
        }
    }
}