#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int n, m;
vector<int> v;
vector<vector<int>> dp;
int dfs(int x, int r) {
    int ans = 0;
    if (dp[x][r] != -1)
        return dp[x][r];
    if (r == 0) {
        return 1;
    } else if (r < 0 || x == 0) {
        return 0;
    } else {
        int a = dfs(x - 1, r - v[x]), b = dfs(x - 1, r);
        //printf("%d %d %d\n",x,a,b);
        dp[x][r]=a+b;
        ans += a + b;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    v.resize(n + 1,0);
    dp.resize(n + 1, vector<int>(m + 1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j]=-1;
        }
    }
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    cout << dfs(n, m)<<endl;
    /* for(int i=0;i<=n;i++,cout<<endl){
        for(int j=0;j<=m;j++){
            cout<<dp[i][j];
        }
    } */
    return 0;
}