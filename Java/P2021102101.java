import java.util.Scanner;
import java.math.BigInteger;
public class P2021102101 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        BigInteger a=sc.nextBigInteger(),b=sc.nextBigInteger(),c=sc.nextBigInteger();
        System.out.println(c.multiply(a.add(b)));
    }
}
