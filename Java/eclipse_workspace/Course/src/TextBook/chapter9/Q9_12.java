package TextBook.chapter9;

import java.util.Scanner;
import TextBook.chapter9.LinearEquation;

public class Q9_12 {

	public static void main(String[] args) {
		double x1,y1,x2,y2,x3,y3,x4,y4;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter x1,y1,x2,y2,x3,y3,x4,y4: ");
		x1=sc.nextDouble();y1=sc.nextDouble();x2=sc.nextDouble();y2=sc.nextDouble();
		x3=sc.nextDouble();y3=sc.nextDouble();x4=sc.nextDouble();y4=sc.nextDouble();
		LinearEquation e=new LinearEquation(y1-y2,x2-x1,y3-y4,x4-x3,(y1-y2)*x1-(x1-x2)*y1,(y3-y4)*x3-(x3-x4)*y3);
		if(!e.isSolvable())System.out.println("The two lines are parallel");
		else System.out.printf("The intersecting point is at(%.5f,%.5f)", e.getX(),e.getY());
	}

}
