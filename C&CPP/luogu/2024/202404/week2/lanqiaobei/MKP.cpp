#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int V,n;
    cin>>n>>V;
    vector<int> v(n+1),w(n+1),s(n+1);
    vector<vector<int>> dp(n+1,vector<int>(V+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=V;j++){
            for(int k=0;k<=s[i]&&j>=v[i]*k;k++){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]*k]+k*w[i]);
            }
        }
    }
    cout<<dp[n][V];
    return 0;
}
//Multiple Knapsack Problem