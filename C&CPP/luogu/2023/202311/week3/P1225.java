import java.math.BigInteger;
import java.util.Scanner;
public class P1225 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        BigInteger b1=new BigInteger("1");
        BigInteger b2=new BigInteger("2");
        BigInteger tmp=new BigInteger("0");
        int n=sc.nextInt();
        if(n==1)System.out.println(b1);
        else if(n==2)System.out.println(b2);
        else{
            for(int i=0;i<n-2;i++){
                tmp=b2;
                b2=b2.add(b1);
                b1=b2;
            }
            System.out.println(b2);
        }
    }
    
}