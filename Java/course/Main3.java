import java.util.Scanner;

public class Main3 {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);

        System.out.println("Enter x1 and y1:");

        double x1=sc.nextDouble(),y1=sc.nextDouble();

        System.out.println("Enter x2 and y2:");

        double x2=sc.nextDouble(),y2=sc.nextDouble();

        sc.close();

        double res=Math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

        System.out.printf("The distance of the two points is %.3f", res);

    }

}
