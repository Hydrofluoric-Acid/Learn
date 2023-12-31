import java.util.Scanner;
import java.math.BigInteger;
public class A {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),ans=Integer.MIN_VALUE;
        int[] s=new int[100];
        for(int i=0;i<n;i++){
            s[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            int a=0;
            for(int j=0;j<n;j++){
                a+=s[j];
                ans=Math.max(ans,a);
            }
        }
        System.out.println(ans);
    }
}
