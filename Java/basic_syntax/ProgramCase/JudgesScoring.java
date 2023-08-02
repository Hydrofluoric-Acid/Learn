import java.util.Scanner;

public class JudgesScoring {
    public static void main(String[] args) {
        System.out.println(score(4));
    }

    public static double score(int judeg_num) {
        Scanner score = new Scanner(System.in);
        int[] score_array = new int[judeg_num];
        for (int i = 0; i < judeg_num; i++) {
            score_array[i] = score.nextInt();
        }
        int max = score_array[0];
        int min = score_array[0];
        int sum = 0;
        for (int i = 0; i < score_array.length; i++) {
            max = score_array[i] > max ? score_array[i] : max;
            min = score_array[i] < min ? score_array[i] : min;
            sum += score_array[i];
        }
        return ((double) (sum - min - max)) / (score_array.length - 2);
    }
}
