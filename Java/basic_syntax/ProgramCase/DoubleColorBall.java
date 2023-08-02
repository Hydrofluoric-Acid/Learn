import java.util.Random;
import java.util.Scanner;

public class DoubleColorBall {
    public static void main(String[] args) {
        String generatedNumbers = generate();
        System.out.println("当前中奖号码为：" + generatedNumbers);
        Scanner sc = new Scanner(System.in);
        int[] nums = new int[7];
        System.out.println("请输入1~33的数字：");
        for (int i = 0; i < 6; i++) {
            while (true) {
                int num = sc.nextInt();
                if (num < 1 || num > 33) {
                    System.out.println("请输入一个1~33的数字");
                } else {
                    if (exist(nums, num)) {
                        System.out.println("请输入一个不重复的数字");
                    } else {
                        nums[i] = num;
                        System.out.println("当前投注为：" + output_string(nums));
                        break;
                    }
                }
            }
        }
        System.out.println("请输入1~16的数字：");
        while (true) {
            int num = sc.nextInt();
            if (num < 1 || num > 16) {
                System.out.println("请输入一个1~16的数字");
            } else {
                nums[6] = num;
                System.out.println("当前投注为：" + output_string(nums));
                break;
            }

        }
        System.out.println(isWining(output_string(nums), generatedNumbers));
    }

    public static String isWining(String str, String generatedNumbers) {
        if (generatedNumbers.equals(str)) {
            return "中奖了";
        } else {
            return "没中奖";
        }
    }

    public static String generate() {
        Random r = new Random();

        int[] num_arr = new int[7];
        for (int i = 0; i < 7; i++) {
            int num = (r.nextInt(32) + 1);
            while(true){
                if(!(exist(num_arr, num))){
                num_arr[i] = num;
                break;
            }else{
                num = (r.nextInt(32) + 1);
            }
        }
            
            /* for (int j = 0; j < i; j++) {
                if (num_arr[j] == num) {
                    /*
                     * i--;
                     * break;
                     
                    
                    j = -1;
                } else {
                    num_arr[i] = num;
                }
            } 
            */
        }
        num_arr[6] = (r.nextInt(15) + 1);
        return output_string(num_arr);
    }

    public static String output_string(int[] arr) {
        String output_str = "[";
        for (int index = 0; index < arr.length; index++) {
            if (index == arr.length - 1) {
                output_str += (arr[index] + "]");
            } else {
                output_str += (arr[index] + ",");
            }
        }
        return output_str;
    }

    public static boolean exist(int[] arr, int num) {
        for (int i = 0; i < arr.length; i++) {
            if (num == arr[i]) {
                return true;
            }
        }
        return false;
    }
}