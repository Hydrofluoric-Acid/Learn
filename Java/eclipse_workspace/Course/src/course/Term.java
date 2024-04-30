package course;

import java.util.Scanner;

public class Term {
	
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		double a=sc.nextDouble(),b=sc.nextDouble(),c=sc.nextDouble();
		QuadraticEquation q=new QuadraticEquation(a,b,c);
		double r=q.getDiscriminant();
		if(r<0.0) {
			System.out.print("The equation has no roots");
		}else if(r==0) {
			System.out.printf("The root is %.2f",q.getRoot1());
		}else {
			System.out.printf("The roots are %.2f and %.2f", q.getRoot1(),q.getRoot2());
		}
		
	}

}
class QuadraticEquation{
	private double a,b,c;
	public QuadraticEquation(double a,double b,double c) {
		this.a=a;
		this.b=b;
		this.c=c;
	}
	public double getDiscriminant() {
		return b*b-4.0*a*c;
	}
	public double getRoot1() {
		return (Math.sqrt(getDiscriminant())-b)/(2.0*a);
	}
	public double getRoot2() {
		return (-1.0*Math.sqrt(getDiscriminant())-b)/(2.0*a);
	}
	
}