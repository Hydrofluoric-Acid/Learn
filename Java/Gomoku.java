import java.util.Arrays;
import java.util.Scanner;

public class Gomoku {
    public static void main(String[] args) {
        Play play = new Play();
        play.printChessBoard();
        play.start();
    }
}

class Play {
    private int[][] arr = new int[15][15];

    public void printChessBoard() {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                switch (arr[i][j]) {
                    case 0:
                        System.out.print("+ ");
                        break;
                    case 1:
                        System.out.print("\u25CF ");
                        break;
                    case 2:
                        System.out.print("\u25CB ");
                        break;
                }
            }
            System.out.println(" ");
        }
    }
    public void start(){
        Scanner sc=new Scanner(System.in);
        while (true) {
            String A=sc.nextLine();
            change(A,1);
            printChessBoard();
            String B=sc.nextLine();
            change(B,2);
            printChessBoard();
            
            
        }
    }
    public void change(String str,int flag){
        int i=Integer.parseInt((str.split(",")[0]));
        int j=Integer.parseInt((str.split(",")[1]));
        if (arr[i][j]!=1 && arr[i][j]!=2) {
            arr[i][j]=flag;
        }
        
    }
}
    
