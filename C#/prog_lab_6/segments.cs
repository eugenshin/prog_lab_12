using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class segments : inputoutput
    {
        private const int MAXN = 100;
        private int n;
        private line[] ptrline;
        public segments(int n)
        {
            if(n < 1)
            {
                throw new Exception("Число меньше 1");
            }
            if (n > MAXN)
            {
                throw new Exception("Число больше " + MAXN);
            }
            this.n = n;
            ptrline = new line[n];
            for (int i = 0; i < n; i++)
            {
                ptrline[i] = new line();
            }
        }
        public void vvod()
        {
            while ((!int.TryParse(Console.ReadLine(), out n))||(n>MAXN)||(n<1))
                Console.WriteLine("Количество отрезков введено неверно.");
            ptrline = new line[n];
            for (int i = 0; i < n; i++)
            {
                ptrline[i] = new line();
            }
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine($"Введите координаты точек начала и конца отрезка {i}.");
                ptrline[i].vvod();
            }
        }
        public void vivod()
        {
            for (int i = 0; i < n; i++)
            {
                Console.Write($"Отрезок {i}\n");
                ptrline[i].vivod();
                Console.WriteLine();
            }
        }
        public double totallength()
        {
            double sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += ptrline[i].length();
            }
            return sum;
        }
        
        public static int getmaxn()
        {
            return MAXN;
        }
    }
}
