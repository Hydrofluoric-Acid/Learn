import java.util.Scanner;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int start=0;
        int count=0;
        int N=sc.nextInt();
        int C=sc.nextInt();
        int[] nums=new int[N];
        for(int i=0;i<N;i++){
            nums[i]=sc.nextInt();
        }
        Arrays.sort(nums);
        for(int i=start;i<N;i++){
            for(int j=start+1;j<N;j++){
                if(nums[i]-nums[j]==C){
                    count+=1;
                }
            }
            start+=1;
        }
        sc.close();
        System.out.println(count);
    }
}