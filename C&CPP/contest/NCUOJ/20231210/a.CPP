#include <iostream>
using namespace std;
typedef long long LL;
LL pows(LL a, LL b, LL p) {
    LL res = 1;
    while (b) {
        if (b & 1) {
            res = res * a % p;
        }
        a = a * a % p;
        b >>= 1;
    }
    return res;
}
int main() {
    LL n, k;
    cin >> n;
    // cout<<pows(2,n,1000000007)<<endl;
    if (n % 2 == 0) {
        k = (LL)(((n / 2) * ((n - 1)))) % 1000000007;
    } else {
        k = (LL)(((n) * ((n - 1) / 2))) % 1000000007;
    }
    k %= 1000000007;
    // cout<<k<<endl;
    LL a = ((pows(2, n, 1000000007) - (n % 1000000007) - 1 - k));
    if (a < 0)
        a += 1000000007;
    cout << a;
    return 0;
}