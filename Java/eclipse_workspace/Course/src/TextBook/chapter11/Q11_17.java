package TextBook.chapter11;

import java.util.HashMap;
import java.util.Scanner;
import java.util.Map;

public class Q11_17 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter an integer m:");
		int m=sc.nextInt();
		Map<Integer,Integer> mp=new HashMap<>();
		for(int i=2;i*i<=m;i++) {
			if(m%i==0) {
				while(m%i==0) {
					mp.compute(i,(k,v)->{
						if(v==null) {
							return 1;
						}
						return ++v;
					});
					m/=i;
				}
			}
		}
		if(m!=1)mp.compute(m,(k,v)->{
			if(v==null) {
				return 1;
			}
			return ++v;
		});
		int n=1;
		for(Map.Entry<Integer, Integer> entry:mp.entrySet()) {
			if(entry.getValue()%2==1) {
				n*=entry.getKey();
			}
		}
		System.out.println("The smallest number n for m*n to be a perfect square is "+n+"\nm*n is "+m*n);
	}

}
