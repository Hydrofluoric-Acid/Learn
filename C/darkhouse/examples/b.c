int IsTheNumber(const int N)
{
    if (sqrt(N) - floor(sqrt(N)) == 0.0) {
        int n = N;
        int num[10] = {0};
        while (n != 0) {
            int index = n % 10;
            n /= 10;
            num[index] += 1;
        }
        for (int i = 0; i < 10; i++) {
            if (num[i] >= 2) {
                return 1;
            }
        }
    }
    return 0;
}