import java.util.Arrays;

public class ArraysTest {
    public static void main(String[] args) {
        int[] nums={1,5,3};
        System.out.println(Arrays.toString(nums));
        //public static String toString(int[] original)
        //public static int[] copyOfRange​(int[] original, int from, int to)
        /* double[] prices = {99.8, 128, 100};
        //                  0     1    2
        // 把所有的价格都打八折，然后又存进去。
        Arrays.setAll(prices, new IntToDoubleFunction() {
            @Override
            public double applyAsDouble(int value) {
                // value = 0  1  2
                return prices[value] * 0.8;
            }
        }); */Arrays.sort(nums);
        System.out.print(Arrays.toString(nums));
}
}
