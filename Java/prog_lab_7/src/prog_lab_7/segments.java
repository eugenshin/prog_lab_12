package prog_lab_7;
import java.util.Scanner;

public class segments implements inputoutput{
	final static int MAXN = 100;
	int n;
	line[] ptrline;
	
	public segments(int n) throws Exception {
		if (n < 1)
			throw new Exception("Number less than 1");
		if(n > MAXN) 
			throw new Exception("Number greater than "+MAXN);
		this.n = n;
		ptrline = new line[n];
		for(int i = 0; i < n; i++)
		{
			ptrline[i] = new line();
		}
	}
	
	public void vvod() {
		Scanner in = new Scanner(System.in);
		do{
			n = in.nextInt();
		}
		while((n < 1)||(n > MAXN));
		ptrline = new line[n];
		for(int i = 0; i < n; i++)
		{
			ptrline[i] = new line();
			ptrline[i].vvod();
		}
	}
	
	public void vivod() {
		for(int i = 0; i < n; i++)
		{
			ptrline[i].vivod();
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
    
	public static int getmaxn() {
		return MAXN;
	}
}