package course;

import java.util.Scanner;
import java.util.Random;

public class GuessString {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Random random=new Random();
		String words[]= {"gunpowder","charcoal","stick","clay","flint","slimeball","diamond","elytra","shield","trident"};
		
		while(true) {					
			String word=words[random.nextInt(10)],tmp="******************",
					guess=tmp.substring(0,word.length());
			int t=0;
			while(true) {
				System.out.print("(Guess)Enter a letter in word "+guess+" >");
				String s=sc.next();
				char c=s.charAt(0);
				if(word.indexOf(c)==-1) {
					t++;
					System.out.println(s+" is not in the word");
				}else {
					if(guess.indexOf(s.charAt(0))!=-1) {
						System.out.println(s+" is already in the word");
					}else {
						String u="";
						for(int i=0;i<word.length();i++) {
							if(word.charAt(i)==c)u+=c;
							else u+=guess.charAt(i);
						}
						guess=u;
					}
				}
				if(guess.equals(word))break;
			}
			System.out.println("The word is "+word+".You missed "+t+" time"+(t>1?"s":""));
			System.out.print("Do you want to guess another word? Enter y or n>");
			String s=sc.next();
			if(s.equals("n"))break;
		}
		
	}

}
