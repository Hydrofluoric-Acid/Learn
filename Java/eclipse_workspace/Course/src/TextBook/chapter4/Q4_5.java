package TextBook.chapter4;

import java.util.Scanner;

public class Q4_5 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number of sizes: ");
		int n=sc.nextInt();
		System.out.print("Enter the side: ");
		double side=sc.nextDouble();
		double s=(1.0*n*side*side)/(4.0*Math.tan(Math.PI/n));
		System.out.print("The area of the polygon is "+s);

	}

}
