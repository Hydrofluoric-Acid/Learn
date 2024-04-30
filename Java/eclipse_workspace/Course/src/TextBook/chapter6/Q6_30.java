package TextBook.chapter6;

import java.util.Random;
import java.util.Scanner;

public class Q6_30 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Random rand=new Random();
		int a=0,b=0,c=0,t=1;
		while(true) {
			a=rand.nextInt(6)+1;
			b=rand.nextInt(6)+1;
			
			System.out.printf("You rolled %d + %d = %d\n", a,b,a+b);
			if(t==1) {
				if(a+b==2||a+b==3||a+b==12) {
					System.out.println("You lose");
					break;
				}else if(a+b==7||a+b==1) {
					System.out.println("You win");
					break;
				}else {
					System.out.printf("point is %d\n", a+b);
				}
			}else {
				if(a+b==c) {
					System.out.println("You win");
					break;
				}else if(a+b==7) {
					System.out.println("You lose");
					break;
				}else {
					System.out.printf("point is %d\n", a+b);
				}
			}
			c=a+b;
			t++;
		}
	}

}
