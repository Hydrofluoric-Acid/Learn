package TextBook.chapter4;

import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class Q4_17 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a year: ");
		int year=sc.nextInt();
		System.out.print("Enter a month: ");
		String month=sc.next();
		Map<String,Integer> mp=new HashMap<String,Integer>();
		mp.put("Jan", 31);
		mp.put("Feb", 28);
		mp.put("Mar", 31);
		mp.put("Ari", 30);
		mp.put("May", 31);
		mp.put("Jun", 30);
		mp.put("Jul", 31);
		mp.put("Aug", 31);
		mp.put("Sep", 30);
		mp.put("Oct", 31);
		mp.put("Nov", 30);
		mp.put("Dec", 31);
		if((year%400==0)||(year%100!=0&&year%4==0))mp.replace("Feb", 29);
		if(mp.get(month)==null) {
			System.out.print(month+" is not a correct month name");
		}else {
			System.out.print(month+" "+year+" has "+mp.get(month)+" days");
		}
		
	}

}
