package TextBook.chapter3;

import java.util.*;

public class Q3_29 {

	public static void main(String[] args) {
		double xCoordinateCircle1, yCoordinateCircle1, radiusCircle1;
		double xCoordinateCircle2, yCoordinateCircle2, radiusCircle2;
		double distanceFromP1ToP2;
		System.out.print("Enter circle1's center x-, y-coordinates, and radius: ");
		Scanner sc = new Scanner(System.in);
		xCoordinateCircle1 = sc.nextDouble();
		yCoordinateCircle1 = sc.nextDouble();
		radiusCircle1 = sc.nextDouble();
		System.out.print("Enter circle2's center x-, y-coordinates, and radius: ");
		xCoordinateCircle2 = sc.nextDouble();
		yCoordinateCircle2 = sc.nextDouble();
		radiusCircle2 = sc.nextDouble();
		distanceFromP1ToP2 = Math.pow((Math.pow(xCoordinateCircle1 - xCoordinateCircle2, 2)+ Math.pow(yCoordinateCircle1 - yCoordinateCircle2, 2)), 0.5);
		if (radiusCircle1 + radiusCircle2 >= distanceFromP1ToP2){
			if (radiusCircle1 - radiusCircle2 >= distanceFromP1ToP2) {
				System.out.println("circle2 is inside circle1");
			}else {
				System.out.println("circle2 overlaps circle1");
			}
		}else {
			System.out.println("circle2 does not overlap circle1");
		}
		sc.close();

	}

}
