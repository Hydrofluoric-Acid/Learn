#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N];
void solve() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int ans = INT_MAX;
    if (k == 4) {
        int o = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] % 2 == 0)
                o++;
            if (a[i] % 4 == 0) {
                cout << 0 << endl;
                return;
            }
        }
        if (o == 1)
            ans = 1;
        else if (o == 0)
            ans = 2;
        else
            ans = 0;
        for (int i = 1; i <= n; i++) {
            if ((a[i] + 1) % 4 == 0) {
                ans = min(1, ans);
                break;
            }
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (a[i] % k == 0) {
                cout << 0 << endl;
                return;
            }
            ans = min(ans, (int)ceil(a[i] * 1.0 / k) * k - a[i]);
        }
    }

    cout << ans << endl;
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