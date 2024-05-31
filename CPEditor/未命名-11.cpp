#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1010;
using namespace std;
int v[N][N];

int sum(int X1, int Y1, int X2, int Y2) {
    return v[X1][Y1] + v[X2-1][Y2-1] - v[X2-1][Y1] - v[X1][Y2-1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, c;
    cin >> n >> m >> c;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> v[i][j];
            v[i][j] += v[i-1][j] + v[i][j-1] - v[i-1][j-1];
        }
    }

    int ans = INT_MIN;
    int px, py;
    
    for (int i = 1; i + c - 1 <= n; i++) {
        for (int j = 1; j + c - 1 <= m; j++) {
            int z = sum(i + c - 1, j + c - 1, i, j);
            if (z > ans) {
                ans = z;
                px = i, py = j;
            }
        }
    }

    cout << px << " " << py;

    return 0;
}
