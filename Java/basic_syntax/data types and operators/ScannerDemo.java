import java.util.Scanner;

public class ScannerDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入你的年龄：");
        int age = sc.nextInt();
        System.out.println("你的年龄是：" + age);
        System.out.println("请输入你的名字：");
        String name = sc.next();
        System.out.println(name + ",欢迎进入系统");
    }
}
