#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 3010;
using namespace std;
int a[N][N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, r;
        cin >> x >> y >> r;
        int lx = y - r , rx = r + y , uy = x , dy = x;
        if (lx < 1) lx = 1;
        if (rx > n)rx = n;
        a[uy][lx]++,a[uy][rx+1]--;
        if(r==0)continue;
        for (int j = 1; j <= r; j++) {
            lx = y - r + j, rx = r + y - j, uy = x - j, dy = x + j;
            //printf("%d %d %d %d\n", lx, rx, uy, dy);
            if (lx < 1)
                lx = 1;
            if (rx > n)
                rx = n;
            if (uy >= 1) {
                a[uy][lx]++, a[uy][rx + 1]--;
            }
            if (dy <= n) {
                a[dy][lx]++, a[dy][rx + 1]--;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] += a[i][j - 1];
            if ((a[i][j] ) % 2) {
                ans++;
            }
        }
    }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<a[i][j]<<' ';
//         }
//         cout<<endl;
//     }
    cout << ans;
    return 0;
}