#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m = LLONG_MAX;
    ll ans = 0;
    cin >> n;
    vector<ll> v(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        ans += v[i];
        v[i] += v[i - 1];
        m = min(m, v[i]);
    }
    if (m < 0)
        m = -m;
    else
        m = 0;
    cout << (ans + m);
    return 0;
}