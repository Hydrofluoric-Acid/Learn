#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve() {
    int n;
    string s;
    cin >> n >> s;
    bool f = true;
    vector<char> v1, v2;
    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9')
            v1.push_back(s[i]);
        if (s[i] >= 'a' && s[i] <= 'z') {
            v2.push_back(s[i]);
            if (!(i == n - 1 || (i + 1 < n && s[i + 1] >= 'a' && s[i + 1] <= 'z')))
                f = false;
        }
    }
    if (!f) {
        cout << "NO" << endl;
        return;
    }
    if (v1.size()) {
        for (int i = 0; i < v1.size() - 1; i++) {
            if (v1[i] > v1[i + 1]) {
                f = false;
                break;
            }
        }
    }
    if (v2.size()) {
        for (int i = 0; i < v2.size() - 1; i++) {
            if (v2[i] > v2[i + 1]) {
                f = false;
                break;
            }
        }
    }

    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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