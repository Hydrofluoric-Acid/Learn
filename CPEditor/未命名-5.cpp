#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> u(n), st(n), v(n + 1, 0);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> u[i];
        st[i - 1] = i;
        mp[u[i]]++;
        if (u[i] <= n)
            v[u[i]]++;
    }
    int q = 1;

    for (auto k : mp) {
        if (k.first > n && k.second > 0) {
            for (int i = k.second; i > 0; i--) {
                int a = find(u.begin(), u.end(), k.first) - u.begin();
                for (q; q <= n && v[q] != 0; q++);
                u[a] = q;
                v[q]++;
                cout << a + 1 << " " << q << endl;
            }
        } else if (k.first <= n && k.second > 1) {
            for (int i = k.second; i > 1; i--) {
                int a = find(u.begin(), u.end(), k.first) - u.begin();
                for (q; q <= n && v[q] != 0; q++);
                u[a] = q;
                v[q]++;
                cout << a + 1 << " " << q << endl;
            }
        }
    }

    return 0;
}