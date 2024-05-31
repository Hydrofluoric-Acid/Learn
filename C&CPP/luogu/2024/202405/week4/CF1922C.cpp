#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
ll a[N], tol[N], tor[N];
void solve() {
    memset(a,0,sizeof(a));
    memset(tol,0,sizeof(tol));
    memset(tor,0,sizeof(tor));
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    a[n+1]=0;
    tor[1] = 1, tol[n] = 1;
    for (int i = 2; i < n; i++) {
        tor[i] = (a[i + 1] - a[i] < a[i] - a[i - 1] ? 1 : a[i + 1] - a[i]);

        tor[i] += tor[i - 1];
    }
    for (int i = n - 1; i >= 2; i--) {
        tol[i] = (a[i + 1] - a[i] > a[i] - a[i - 1] ? 1 : a[i] - a[i - 1]);
        tol[i] += tol[i + 1];
    }
    // for (int i = 1; i <= n; i++) {
    //     cout << tor[i] << ' ';
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     cout << tol[i] << ' ';
    // }
    // cout << endl;
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        ll ans = 0;
        cin >> x >> y;
        if(x<y)cout << tor[y - 1] - tor[x - 1];
        else cout<<tol[y+1]-tol[x+1];
        cout << endl;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}