package course;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Eneter a number between 0 ans 1000:");
        int num = sc.nextInt(), res = 0;
        res += num % 10 + num / 10 % 10 + num / 100;
        System.out.println("The sum of the digits is " + res);
        sc.close();
    }
}