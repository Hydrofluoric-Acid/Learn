#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] += v[i - 1];
        dp[i][i] = 0;
    }
    /* for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<j;k++){
                if(i==j){
                    dp[i][j]=0;
                }else{
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+v[j]-v[i-1]);
                }
            }
        }
    } */
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n; i++) {
            int l = i, r = i + len - 1;
            dp[l][r] = N;
            for (int k = 1; k < r; k++) {
                dp[l][r] = min(dp[l][r], dp[l][k] + dp[k + 1][r] + v[r] - v[l - 1]);
            }
        }
    }
    cout << dp[1][n];
    return 0;
}
/*
4
1 3 5 2
*/