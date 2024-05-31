#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[2020];
void solve() {
    int n, d;
    cin >> n >> d;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = 2; i <= n; i++) {
        if (a[i] > a[i - 1])continue;
        int x = (int)ceil(1.0 * (a[i - 1] - a[i]) / d)+((a[i-1]-a[i])%d==0);
        a[i] += x * d;
        ans += x;
        //cout << x << ' ' << ans << endl;
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}