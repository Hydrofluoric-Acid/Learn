import java.util.Random;
import java.util.Scanner;

public class RandomNum2 {
    public static void main(String[] args) {
        Random r = new Random();
        Scanner sc = new Scanner(System.in);
        int data = r.nextInt(101);
        System.out.println(data);
        while (true) {
            System.out.println("请输入猜测的数值：");
            int num = sc.nextInt();
            if (num > data) {
                System.out.println("too big");
            } else if (num == data) {
                System.out.println("you are right");
                break;
            } else {
                System.out.println("too small");
            }
        }
    }
}
