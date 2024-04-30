package course;

import java.util.Scanner;

public class Term2 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		double x=sc.nextDouble();
		Square s=new Square(x);
		System.out.println(s.toString());
	}
	
}
class Square{
	private double side;
	public Square() {
		side=1.0;
	}
	public Square(double nside) {
		side=nside;
	}
	public double getArea() {
		return side*side;
	}
	public String toString() {
		return "Square:side="+side+" area="+getArea();
	}
	
}
