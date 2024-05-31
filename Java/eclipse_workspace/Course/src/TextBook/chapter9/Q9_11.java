package TextBook.chapter9;

public class Q9_11 {

	public static void main(String[] args) {
		double a=2,b=3,c=5,d=1,e=2,f=8,g=4,h=6;
		LinearEquation l1=new LinearEquation(a,b,c,d,e,f);
		if(!l1.isSolvable())System.out.println("The equation has no solution");
		else {
			System.out.println("The equation has solution X="+l1.getX()+" Y="+l1.getY());
		}
		LinearEquation l2=new LinearEquation(a,b,g,h,e,f);
		if(!l2.isSolvable())System.out.println("The equation has no solution");
		else {
			System.out.println("The equation has solution X="+l2.getX()+" Y="+l2.getY());
		}
	}

}
class LinearEquation{
	private double a,b,c,d,e,f;
	public LinearEquation(double a,double b,double c,double d,double e,double f) {
		this.a=a;
		this.b=b;
		this.c=c;
		this.d=d;
		this.e=e;
		this.f=f;
	}
	public double getA() {
		return this.a;
	}
	public double getB() {
		return this.b;
	}
	public double getC() {
		return this.c;
	}
	public double getD() {
		return this.d;
	}
	public double getE() {
		return this.e;
	}
	public double getF() {
		return this.f;
	}
	public boolean isSolvable() {
		return a*d-b*c!=0;
	}
	public double getX() {
		return (e*d-b*f)/(a*d-b*c);
	}
	public double getY() {
		return (a*f-e*c)/(a*d-b*c);
	}
}
