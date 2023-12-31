#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || j == 1)
                dp[i][j] = 1;
            else if (i < j)
                dp[i][j] = dp[i][i];
            else if (i == j)
                dp[i][j] = dp[i][j - 1] + 1;
            else
                dp[i][j] = dp[i][j - 1] + dp[i - j][j];
        }
    }
    // cout << dp[n][k];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}