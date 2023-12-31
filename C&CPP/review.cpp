#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
ll pows(int a, int b) {
    ll ans = 1;
    while (b) {
        if (b & 1) {
            ans *= a;
        }
        a *= a;
        b >>= 1;
    }
    return ans;
}
ll pows1(int a, int b, int c) {
    ll ans = 1;
    while (b) {
        if (b & 1) {
            ans *= a % c;
        }
        a *= a % c;
        b >>= 1;
    }
    return ans;
}
int main() {
    cout << gcd(12, 48) << endl;
    cout << __gcd(12, 48) << endl;
    cout << pows(2, 5) << endl;
    cout << pows1(2, 5, 3) << endl;
}