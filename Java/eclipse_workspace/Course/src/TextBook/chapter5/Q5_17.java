package TextBook.chapter5;

import java.util.Scanner;

public class Q5_17 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number of lines: ");
		int n=sc.nextInt();
		sc.close();
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n-i;j++) {
				System.out.print("   ");
			}
			for(int j=i;j>1;j--) {
				System.out.printf("%-3d",j);
			}
			System.out.print("1  ");
			for(int j=2;j<=i;j++) {
				System.out.printf("%-3d",j);
			}
			System.out.println();
		}

	}

}
