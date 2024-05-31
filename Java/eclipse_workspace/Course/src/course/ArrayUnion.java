package course;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

public class ArrayUnion {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		ArrayList<Integer> list1=new ArrayList<>(),list2=new ArrayList<>();
		System.out.print("Enter five integers for list1: ");
		for(int i=0;i<5;i++) {
			int x=sc.nextInt();
			list1.add(x);
		}
		System.out.print("Enter five integers for list2: ");
		for(int i=0;i<5;i++) {
			int x=sc.nextInt();
			list2.add(x);
		}
		list1=union(list1,list2);
		System.out.print("The combined list is ");
		for(int i=0;i<list1.size();i++) {
			System.out.print(list1.get(i)+" ");
		}
		System.out.print("\nThe sorted list is ");
		Collections.sort(list1);
		for(int i=0;i<list1.size();i++) {
			System.out.print(list1.get(i)+" ");
		}
	}
	public static ArrayList<Integer> union(ArrayList<Integer> list1,ArrayList<Integer> list2){
		ArrayList<Integer> result=new ArrayList<>();
		for(int i=0;i<list1.size();i++) {
			if(result.indexOf(list1.get(i))==-1) {
				result.add(list1.get(i));
			}
		}
		for(int i=0;i<list2.size();i++) {
			if(result.indexOf(list2.get(i))==-1) {
				result.add(list2.get(i));
			}
		}
		return result;
	}

}
