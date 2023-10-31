import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Scanner;

public class P1102 {
    public static void main(String[] args) throws Exception{
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        String[] tmps=in.readLine().split(" ");
        int n=Integer.valueOf(tmps[0]),c=Integer.valueOf(tmps[1]);
        }
    
    }/* Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int C = sc.nextInt();
        long count = 0;//卡在200000 1 1万个1 1万个2处，发现count溢出
        HashMap<Integer,Integer> map=new HashMap<>();
        int[] nums = new int[N];
        for (int i = 0; i < N; i++) {
            int tmp = sc.nextInt();
            nums[i] = tmp;
            map.put(tmp, map.get(tmp)==null?1:map.get(tmp)+1);
             }
            sc.close();
            for (int j = 0; j < N; j++) {
                int temp=nums[j] + C;
                if (map.keySet().contains(temp)) {
                    count+=map.get(temp);
                }
            }
            System.out.println(count); */
/*  Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int C = sc.nextInt();
        int count = 0;
        HashMap<Integer,Integer> map=new HashMap<>();
        int[] nums = new int[N];
        for (int i = 0; i < N; i++) {
            int tmp = sc.nextInt();
            nums[i] = tmp;
            map.put(tmp, map.get(tmp)==null?1:map.get(tmp)+1);
             }
            sc.close();
            for (int j = 0; j < N; j++) {
                int temp=nums[j] + C;
                if (map.keySet().contains(temp)) {
                    count+=map.get(temp);
                }
            }
            System.out.println(count); */