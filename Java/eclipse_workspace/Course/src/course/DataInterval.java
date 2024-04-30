package course;

import java.util.Date;
import java.util.Scanner;

public class DataInterval {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int year1=sc.nextInt(),month1=sc.nextInt(),day1=sc.nextInt();
		int year2=sc.nextInt(),month2=sc.nextInt(),day2=sc.nextInt();
		long t1=new Date(year1,month1,day1).getTime(),t2=new Date(year2,month2,day2).getTime();
		System.out.println((t2-t1)/(24*60*60*1000));
	}

}
