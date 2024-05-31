#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n,m;
vector<int> v;
bool dfs(int i,int j,vector<vector<int>>& dp){
    if(j==m+1)return false;
    if(dp[i][j]!=-1)return dp[i][j];
    if(i==1&&j==m)return true;
    bool f=false;
    f=f||dfs((i+n+v[j])%n,j+1,dp);
    f=f||dfs((i+n-v[j])%n,j+1,dp);
    dp[i][j]=f;
    return f;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    v.resize(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    if(dfs(1,0,dp))cout<<"YES";
    else cout<<"NO";
    return 0;
}