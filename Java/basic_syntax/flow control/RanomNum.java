import java.util.Random;

public class RanomNum {
    public static void main(String[] args) {
        //nextInt(n)生成0至n-1之间的随机数，不包括n
        Random r = new Random();
        for (int i = 0; i < 20; i++) {
            int data = r.nextInt(11);
            System.out.println(data);
        }
    }
}
