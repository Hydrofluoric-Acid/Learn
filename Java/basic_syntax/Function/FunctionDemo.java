import java.util.Scanner;

public class FunctionDemo {
    public static void main(String[] args) {
        int rs = sum(12, 78);
        System.out.println(rs);
        System.out.println(output_string(3, "Hello World!"));
        System.out.println(calcute(99));
        Scanner sc = new Scanner(System.in);
        int value = sc.nextInt();
        System.out.println(judege(value));
        int[] arr1 = null;
        int[] arr2 = {};
        int[] arr3 = { 1, 2, 3, 4 };
        printArray(arr1);
        printArray(arr2);
        printArray(arr3);
        int[] arr4 = { 1, 2, 4, 6, 5 };
        System.out.println(isSame(arr3, arr4));
    }

    public static int sum(int a, int b) {
        int c = a + b;
        return c;
    }

    public static String output_string(int n, String string) {
        String strings = "";
        for (int i = 0; i < n; i++) {
            strings += string;
        }
        return strings;
    }

    public static int calcute(int n) {
        if (n == 1) {
            return 1;
        } else {
            return n + calcute(n - 1);
        }
    }

    public static String judege(int num) {
        String string;
        if (num % 2 == 0) {
            string = num + "是偶数";
        } else {
            string = num + "是偶数";
        }
        return string;
    }

    public static void printArray(int[] arr) {
        if (arr == null) {
            System.out.println(arr);
        } else {
            System.out.print("[");
            for (int i = 0; i < arr.length; i++) {
                if (i == arr.length - 1) {
                    System.out.print(arr[i]);
                } else {
                    System.out.print(arr[i] + ",");
                }

            }
            System.out.println("]");
        }
    }

    public static boolean isSame(int[] arr1, int[] arr2) {
        boolean flag = false;
        if (arr1 == null && arr2 == null) {
            flag = true;
        }
        if (!((arr1 == null || arr2 == null) & arr1.length != arr2.length)) {
            flag = false;

        } else {
            for (int i = 0; i < arr1.length; i++) {
                if (arr1[i] != arr2[i]) {
                    flag = false;
                    break;
                } else {
                    flag = true;
                }
            }
        }
        return flag;
    }
    //方法重载，一个类中，多个方法的名称相同但形参列表不同，为处理某一类业务提供多种解决方案
}
