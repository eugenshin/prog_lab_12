using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
	internal abstract class figure
	{
		protected point[] pt;
		protected figure(int n)
		{
			pt = new point[n];
			for (int i = 0; i < n; i++)
			{
				pt[i] = new point();
			}
		}
		abstract public double square();
		abstract public double per();
	}
}
