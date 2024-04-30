package TextBook.chapter3;
import java.util.Scanner;
public class Q3_9 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the first 9 digits of an ISBN as integer:");
		String s=sc.next();
		sc.close();
		int k=0;
		for(int i=1;i<=9;i++) {
			k+=(s.charAt(i-1)-'0')*i;
		}
		k%=11;
		System.out.print("The ISBN-10 number is "+s);
		if(k==10)System.out.print("X");
		else System.out.print(k);
	}

}
