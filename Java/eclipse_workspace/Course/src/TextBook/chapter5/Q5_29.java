package TextBook.chapter5;

import java.util.Scanner;

public class Q5_29 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the year and the day of the week of first day: ");
		int year=sc.nextInt(),day=sc.nextInt(),y=365;
		int ms[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
		String month[]= {"","January", "February", "March", "April", "May", "June", "July", "August", "September", "October",
				"November", "December"};
		if(year%400==0||(year%100!=0&&year%4==0)) {
			ms[2]=29;
			y=366;
		}
		int d=1;
		for(int i=1;i<=12;i++) {
			System.out.printf("                  %s %d                      \n",month[i],year);
			System.out.println("---------------------------------------------");
			System.out.println("Sun    Mon    Tue    Wed    Thu    Fri    Sat");
			for(int j=1;j<=day;j++) {
				System.out.print("       ");
			}
			for(int j=1;j<=ms[i];j++) {
				System.out.printf("%-7d",j);
				if((j+day)%7==0)System.out.println();
			}
			day=(day+ms[i]%7)%7;
			System.out.println();
		}
	}

}
