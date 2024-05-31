#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll a[N];
ll n, k, x;
bool check(int x) {
    ll s = 0;
    for (int i = 1; i <= n; i++) {
        s += max(0ll, x - a[i]);
    }
    return s >= k;
}
void solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << a[1] + k << endl;
        return;
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        a[i] += a[i - 1];
    }
    x = n;
    for (int i = 1; i <= n; i++) {
        ll g = a[i] - a[i - 1];
        if (a[i] + k < i * g) {
            x = i;
            break;
        }
    }
    ll biaozun = a[x] - a[x - 1] + (k - a[x] + a[x - 1]) / x;
    k %= x;
    cout << biaozun * n + x - n + 1 << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}