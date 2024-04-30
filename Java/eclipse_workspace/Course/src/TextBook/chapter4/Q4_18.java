package TextBook.chapter4;

import java.util.Scanner;

public class Q4_18 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter two characters: ");
		String s=sc.next();
		boolean flag1=false,flag2=false;
		char cGrade=s.charAt(1),cMajor=s.charAt(0);
		String major="",grade="";
		if(cMajor=='M') {
			major="Mathematics";
		}else if(cMajor=='C') {
			major="Computer Science";
		}else if(cMajor=='I') {
			major="Information Management";
		}else {
			flag1=true;
		}
		if(cGrade=='1') {
			grade=" Freshman";
		}else if(cGrade=='2') {
			grade=" Sophomore";
		}else if(cGrade=='3') {
			grade=" Junior";
		}else if(cGrade=='4') {
			grade=" Senior";
		}else {
			flag2=true;
		}
		if(flag1||flag2) {
			System.out.print("Invalid input");
		}else System.out.print(major+grade);
	}

}
