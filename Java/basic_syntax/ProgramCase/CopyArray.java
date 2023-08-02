import java.util.Arrays;

public class CopyArray {
    public static void main(String[] args) {
        int[] initial_array = {};
        System.out.println(Arrays.toString(copy_array(initial_array)));

    }

    public static int[] copy_array(int[] array) {
        int[] proceed_array = new int[array.length];
        for (int i = 0; i < proceed_array.length; i++) {
            proceed_array[i] = array[i];
        }
        return proceed_array;
    }
} 