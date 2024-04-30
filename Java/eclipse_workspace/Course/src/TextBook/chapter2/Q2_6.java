package TextBook.chapter2;

import java.util.Scanner;

public class Q2_6 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a number between 0 and 1000:");
		int x=sc.nextInt();
		sc.close();
		System.out.println("The sum of the digits is "+x%10+x/10%10+x/100);
	}
}
