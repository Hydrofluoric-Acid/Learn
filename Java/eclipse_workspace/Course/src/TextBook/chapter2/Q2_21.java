package TextBook.chapter2;

import java.util.Scanner;

public class Q2_21 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter investment amount:");
        double investmentamount = sc.nextDouble();
        System.out.print("Enter annual interest rate in percentage:");
        double annualinterestrate = sc.nextDouble()/12/100;
        System.out.print("Enter number of years:");
        int years = sc.nextInt();
        double Accumulatedvalue = investmentamount * Math.pow((1 + annualinterestrate), years * 12);
        System.out.print("Accumulated value is $" + String.format("%.2f", Accumulatedvalue));
        
    }

}

