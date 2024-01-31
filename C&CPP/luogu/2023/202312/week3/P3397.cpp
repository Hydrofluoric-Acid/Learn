#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x1, y1, x2, y2;
    cin >> n >> m;
    vector<vector<int>> v(n + 2, vector<int>(n + 2, 0));
    while (m--) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i <= x2; i++) {
            v[i][y1]++, v[i][y2 + 1]--;//差分：在区间内所有数加上一个数
        }
    }
    for (int i = 1; i <= n; i++) {
        int ans = 0;
        for (int j = 1; j <= n; j++) {
            ans += v[i][j];
            cout << ans << " ";
        }
        cout << endl;
    }
}
/* #include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x1, y1, x2, y2;
    cin >> n >> m;
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    while (m--) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                a[i][j]++;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", a[i][j]);
        }
        cout << endl;
    }
    return 0;
} */