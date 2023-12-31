import java.math.BigInteger;
import java.util.Scanner;

public class P11 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(n==1||n==2){
            System.out.println(1);
        }else{
            BigInteger di=new BigInteger("2"),o=di.pow(n);
        BigInteger k=new BigInteger(String.valueOf(n));
        BigInteger s=(k.multiply(k.subtract(BigInteger.ONE))).divide(new BigInteger("2"));
        o=o.subtract(s);
        o=o.subtract(BigInteger.ONE);
        o=o.subtract(k);
        BigInteger out[]=o.divideAndRemainder(new BigInteger("1000000007"));
        System.out.println(out[1]);
        }
        
    }
}
