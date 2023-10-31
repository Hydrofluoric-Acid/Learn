import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
public class Main{
    public static void main(String[] args) throws Exception{
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        String[] tmps=in.readLine().split(" ");
        int a=Integer.valueOf(tmps[0]),b=Integer.valueOf(tmps[1]);
        System.out.println(a+b);
    }
}