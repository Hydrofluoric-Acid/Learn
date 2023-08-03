public class IsPrime {
    public static void main(String[] args) {
        System.out.println(is_prime(3, 12));
    }

    public static int is_prime(int start, int end) {
        int count = 0;
        for (int i = start; i <= end; i++) {
            boolean isPrime = true; 
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = false; 
                    break;
                }
            }
            if (isPrime) {
                count++; 
            }
        }
        return count;
    }
}