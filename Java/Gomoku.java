import java.util.ArrayList;
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
    private String[] index = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F" };
    public void printChessBoard() {
        StringBuilder sb = new StringBuilder();
        sb.append("1 2 3 4 5 6 7 8 9 A B C D E F\n");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                switch (arr[i][j]) {
                    case 0:
                        sb.append("+ ");
                        break;
                    case 1:
                        sb.append("\u25CF ");
                        break;
                    case -1:
                        sb.append("\u25CB ");
                        break;
                }
            }
            sb.append(index[i] + "\n");
        }
        System.out.print(sb);
    }

    public void start() {
        boolean flag = true;
        Scanner sc = new Scanner(System.in);
        while (true) {
            String A = sc.nextLine();
            flag = change(A, 1);
            String B = sc.nextLine();
            flag = change(B, -1);
        }
    }

    public boolean change(String str, int c) {
        for (int i = 0; i < 6; i++) {
            str = str.replace(index[i + 9], Integer.toString(i + 10));
        }

        int i = Integer.parseInt((str.split(",")[0])) - 1;
        int j = Integer.parseInt((str.split(",")[1])) - 1;
        if (arr[i][j] != 1 && arr[i][j] != -1) {
            arr[i][j] = c;
        }
        this.printChessBoard();
        return this.judge();
    }

    public boolean judge() {
        return (judge_nums_horizontal()) || (judge_diagonal());
    }

    public boolean judge_diagonal() {
        ArrayList<Integer> nums_L_diagonal = new ArrayList<>();
        ArrayList<Integer> nums_R_diagonal = new ArrayList<>();
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                nums_L_diagonal.add(arr[i][i]);
                nums_R_diagonal.add(arr[14 - i][i]);
            }
            if ((isEqual(sum(nums_L_diagonal))) || (isEqual(sum(nums_R_diagonal)))) {
                return false;
            }
        }
        return true;
    }

    public boolean judge_nums_horizontal() {
        ArrayList<Integer> nums_horizontal = new ArrayList<>();
        ArrayList<Integer> nums_vertical = new ArrayList<>();
        for (int start = 0; start < 11; start++) {
            for (int a = 0; a < 15; a++) {
                for (int b = start; b < start + 5; b++) {
                    nums_horizontal.add(arr[a][b]);
                    nums_vertical.add(arr[b][a]);
                }
                if ((isEqual(sum(nums_vertical))) || (isEqual(sum(nums_horizontal)))) {
                    return false;
                }
            }
        }
        return true;
    }

    public int sum(ArrayList<Integer> arr) {
        int sum = 0;
        for (Integer integer : arr) {
            sum += integer;
        }
        return sum;
    }

    public boolean isEqual(int n) {
        if (n == 5 || n == -5) {
            return true;
        } else {
            return false;
        }
    }
}