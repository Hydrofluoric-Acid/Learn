package course;

import java.util.Scanner;

public class RegularPolygonMain {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number and side length for Polygon2:");
		int n2=sc.nextInt();
		double side2=sc.nextDouble();
		System.out.println("Enter the number, side length and center point coordinates of Polygon3:");
		int n3=sc.nextInt();
		double side3=sc.nextDouble(),x3=sc.nextDouble(),y3=sc.nextDouble();
		RugularPolygon r1=new RugularPolygon();
		System.out.printf("Polygon 1 perimeter: %.1f\n",r1.getPerimeter());
		System.out.printf("Polygon 1 area: %.2f\n",r1.getArea());
		RugularPolygon r2=new RugularPolygon(n2,side2);
		System.out.printf("Polygon 2 perimeter: %.1f\n",r2.getPerimeter());
		System.out.printf("Polygon 2 area: %.2f\n",r2.getArea());
		RugularPolygon r3=new RugularPolygon(n3,side3,x3,y3);
		System.out.printf("Polygon 3 perimeter: %.1f\n",r3.getPerimeter());
		System.out.printf("Polygon 3 area: %.2f\n",r3.getArea());

	}

}
class RugularPolygon{
	private int n =3;
	private double side =1.0;
	private double x=0.0;
	private double y=0.0;
	public RugularPolygon() {
		
	}
	public RugularPolygon(int n,double side) {
		this.n=n;
		this.side=side;
	}
	public RugularPolygon(int n,double side,double x,double y) {
		this.n=n;
		this.side=side;
		this.x=x;
		this.y=y;
	}
	public double getPerimeter() {
		return this.side*n;
	}
	public double getArea() {
		return (1.0*n*side*side)/(4*Math.tan(Math.PI/n));
	}
}
