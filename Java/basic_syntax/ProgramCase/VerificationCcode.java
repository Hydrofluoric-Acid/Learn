import java.util.Random;

public class VerificationCcode {
    public static void main(String[] args) {
        System.out.println(generateVerification(400));
    }

    public static String generateVerification(int n) {
        Random random_num = new Random();
        String verfication = "";
        for (int i = 0; i < n; i++) {
            verfication += (generate(random_num.nextInt(61)));
        }
        return verfication;
    }

    public static char generate(int num) {
        Random r = new Random();
        if (num >= 0 & num <= 9) {
            return (char) (r.nextInt(10) + 48);
        } else if (num >= 10 & num <= 35) {
            return (char) (r.nextInt(26) + 65);
        } else {
            return (char) (r.nextInt(26) + 97);
        }
    }
}
