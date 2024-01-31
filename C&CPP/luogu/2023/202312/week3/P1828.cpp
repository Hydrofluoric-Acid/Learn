#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n + 1), sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + v[i];
    }
    int k, a, b;
    cin >> k;
    while (k--) {
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] << endl;
    }
    return 0;
}