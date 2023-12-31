import java.math.BigInteger;
import java.util.Scanner;

public class P11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BigInteger ans=BigInteger.ONE;
        for(int 2;i<=n;i++){
            ans.add(new BigInteger(String.valueOf(i)));
        }
        System.out.println(ans);
    }

}
