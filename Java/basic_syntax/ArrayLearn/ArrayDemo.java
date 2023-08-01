import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class ArrayDemo {
    public static void main(String[] args) {
        String[] name = { "a", "b", "c" };
        Random r = new Random();
        int i = r.nextInt(name.length);
        System.out.println(name[i]);

        // 数组的静态初始化：在定义数组时直接给数组赋值
        // 数据类型[] 变量名 = new 数据类型[]{元素1，元素2，元素3}
        double[] scores = new double[] { 23, 45.56 };
        // 简化格式 数据类型[] 变量名 = {元素1,元素2,元素3};
        String[] names = { "张三", "李四" };
        // 数组长度 array.length
        // 数组遍历for循环
        int[] money = { 16, 26, 36, 6, 100 };
        int total_money = 0;
        for (int j = 0; j < money.length; j++) {
            total_money += money[j];
        }
        System.out.println(total_money);

        // 数组的动态初始化：不写出具体元素，指定元素类型和数量
        // 数据类型[] 数组名 = new 数据类型[长度];
        // 引用类型：类，接口，数组，String
        double[] all_scores = new double[6];
        Scanner sc = new Scanner(System.in);
        for (int j = 0; j < all_scores.length; j++) {
            int k = j + 1;
            System.out.print("现在请第" + k + "位评委打分：");
            double data = sc.nextInt();
            all_scores[j] = data;
        }
        System.out.println(Arrays.toString(all_scores));

        int arr[] = { 10, 20, 30, 40, 50 };
        int arr_reverse[] = new int[arr.length];
        for (int j = 0; j < arr_reverse.length; j++) {
            arr_reverse[j] = arr[arr.length - j - 1];
        }
        System.out.println(Arrays.toString(arr));
        System.out.println(Arrays.toString(arr_reverse));

    }
}