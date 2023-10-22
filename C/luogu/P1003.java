import java.util.Scanner;
public class P1003{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int out=-1;
        int n=sc.nextInt();
        int[][] num=new int[n][4];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                num[i][j]=sc.nextInt();
            }
            num[i][2]+=num[i][0];
            num[i][3]+=num[i][1];
        }
        int x=sc.nextInt();
        int y=sc.nextInt();
        for(int k=0;k<n;k++){
            if((num[k][0]<=x)&(num[k][1]<=y)&(num[k][2]>=x)&(num[k][3]>=y)){
               out=k; 
            }
        }System.out.print((out==-1)?-1:out+1);
        
       sc.close(); 
    }
}