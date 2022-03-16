package prog_lab_7;

public abstract class figure {//абстрактный класс
	protected  point[] pt;	
	figure(int n){
	pt = new point[n];
		for(int i = 0; i < n; i++) {
			pt[i] = new point();
		}
	}
	abstract double square();
	abstract double per();
}
