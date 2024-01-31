#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, p = 0;
        string opt;
        ull k;
        scanf("%d", &n);
        vector<ull> v(n);
        for (int i = 0; i < n; i++) {
            cin >> opt;
            if (opt == "push") {
                scanf("%d", &k);
                v[p++] = k;
            } else if (opt == "query") {
                if (p == 0)
                    printf("Anguei!\n");
                else {
                    printf("%llu\n", v[p - 1]);
                }
            } else if (opt == "size") {
                printf("%d\n", p);
            } else if (opt == "pop") {
                if (p > 0)
                    p--;
                else
                    printf("Empty\n");
            }
        }
    }
    return 0;
}