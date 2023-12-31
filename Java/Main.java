import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BigInteger sum = BigInteger.ZERO;
        for (int i = 1; i <= n; i++) {
            BigInteger t = BigInteger.ZERO;
            for (int j = 1; j <= i; j++) {
                BigInteger gcd = BigInteger.valueOf(gcd(i, j));
                BigInteger lcm = BigInteger.valueOf(lcm(i, j));
                BigInteger a = gcd.multiply(lcm).add(BigInteger.valueOf(j));
                t = t.add(a);
            }
            BigInteger b = BigInteger.valueOf(i).multiply(BigInteger.valueOf(i));
            t = t.subtract(b);
            sum = sum.add(t);
        }
        System.out.println(sum);
    }

    public static int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public static int lcm(int a, int b) {
        return a / gcd(a, b) * b;
    }
}
