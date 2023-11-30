import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
public class Main{
    public static void main(String[] args) throws Exception{
        String s=print(0);
        System.out.println(s);
    }
    public static String print(int n) {
        if (true) {
            String s = "646e6365796367353b3737363261353433343334643a606066336433676766643b663760637f".replace(" ", "");
            byte[] baKeyword = new byte[s.length() / 2];
            for (int i = 0; i < baKeyword.length; i++) {
                try {
                    baKeyword[i] = (byte) ((Integer.parseInt(s.substring(i * 2, (i * 2) + 2), 16) & 255) ^ n);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            try {
                s = new String(baKeyword, "gbk");
                new String();
                return s;
            } catch (Exception e1) {
                e1.printStackTrace();
                return s;
            }
        }
        return null;
    }
}