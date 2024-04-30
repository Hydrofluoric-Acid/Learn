package TextBook.chapter3;

import java.util.Scanner;

public class Q3_23 {
	final static double x=10.0,y=5.0;
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a point with two coordinates:");
		double px=sc.nextDouble(),py=sc.nextDouble();
		System.out.print("Point ("+px+", "+py+") is ");
		if(Math.abs(px)*2>x||Math.abs(py)*2>y) {
			System.out.print("not ");
		}
		System.out.print("in the rectangle");
	}

}
