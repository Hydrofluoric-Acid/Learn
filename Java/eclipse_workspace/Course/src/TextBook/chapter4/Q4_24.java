package TextBook.chapter4;

import java.util.Arrays;
import java.util.Scanner;

public class Q4_24 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String[] cities=new String[3];
		System.out.print("Enter the first city: ");
		cities[0]=sc.nextLine();
		System.out.print("Enter the second city: ");
		cities[1]=sc.nextLine();
		System.out.print("Enter the third city: ");
		cities[2]=sc.nextLine();
		Arrays.sort(cities);
		System.out.print("The three cities in alphabetical order are "+cities[0]+" "+cities[1]+" "+cities[2]);
	}

}
