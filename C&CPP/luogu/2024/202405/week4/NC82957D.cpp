#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N], vis[N], b[N], cnt = 1;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] % a[i + 1]) {
            cout << -1;
            return 0;
        }
    }
    b[0] = a[1];
    vis[a[1]] = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1)
            break;
        if (!vis[a[i]]) {
            b[cnt++] = a[i];
            vis[a[i]]++;
        } else {
            bool f = true;
            for (int j = a[i] * vis[a[i]]; j <= n; j += a[i]) {
                if (!vis[j]) {
                    b[cnt++] = j;
                    vis[j] = 1;
                    f = false;
                    break;
                }
            }
            vis[a[i]]++;
            if (f) {
                cout << -1;
                return 0;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i])
            b[cnt++] = i;
    }
    for (int i = 0; i < cnt; i++) {
        cout << b[i] << ' ';
    }
    return 0;
}