import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        int[] arr={1,5,8,3,9};
        System.out.println(Arrays.toString(BubbleSorts(arr)));

    }
    public static int[] BubbleSorts(int[] arrs){
        for (int i = 0; i < arrs.length-1; i++) {
            for (int j = 0; j < arrs.length-i-1; j++) {
                if (arrs[j]>arrs[j+1]) {
                    int temp=arrs[j+1];
                    arrs[j+1]=arrs[j];
                    arrs[j]=temp;
                }
            }
        }
        return arrs;
    }
}
