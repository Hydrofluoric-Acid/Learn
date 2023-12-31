---
typora-copy-images-to: ./assets
---

#### 求解三角形最小路径问题

<img src="D:\Coding\Learn\Note\assets\屏幕截图 2023-12-31 220249.png" style="zoom:50%;" />

```c++
//file:D:\Coding\Learn\C&CPP\luogu\dp\shotestRoute.cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(n+1)), dp(n + 1, vector<int>(n+1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    dp[1][1] = a[1][1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 && j == 1) {
                dp[i][i] = a[1][1];
            } else if (j == 1) {
                dp[i][1] = dp[i - 1][j] + a[i][1];
            } else if (i == j) {
                dp[i][j] = dp[i - 1][j - 1] + a[i][j];
            } else {
                dp[i][j] = min(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
            }
        }
    }
    // dp[i][j]为a[1][1]到a[i][j]最短路径
    // dp[1][1]=a[1][1]
    // dp[i][1]=dp[i-1][1]+a[i][1]
    // dp[i][i]=dp[i-1][j-1]+a[i][i]
    // 一般情况dp[i][j]=min(dp[i-1][j-1],dp[i-1][j])+a[i][j]
    int ans = INT_MAX;
    for (int j = 1; j <= n; j++) {
        ans = min(ans, dp[n][j]);
    }
    cout << ans;
    return 0;
    
}
/* 
4
2
3 4
6 5 7
8 3 9 2 
*/
```

#### 求解最长公共子序列问题(LCS)

<img src="D:\Coding\Learn\Note\assets\屏幕截图 2023-12-31 220809.png" style="zoom:50%;" />

思路1：列举A的所有子序列，一一检查是否是B的子序列，并记录，耗时长

思路2：动态规划

设A=(a0,a1,...,am-1),B=(b0,b1,...,bn-1),设Z=(z0,z1,...,zk-1)为它们的最长公共子序列，则有以下性质：

<img src="D:\Coding\Learn\Note\algorithm\assets\屏幕截图 2023-12-31 222712.png" style="zoom:50%;" />