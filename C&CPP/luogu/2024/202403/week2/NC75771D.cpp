/* #include <bits/stdc++.h>
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
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> v(m+1);
    for(int i=1;i<=m;i++){
        cin>>v[i];
    }
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    dp[0][1]=1;
    for(int j=1;j<=m;j++){
        for(int i=1;i<=n;i++){
            if(dp[j-1][i]){
                dp[j][(i+n+v[j])%n]=1;
                dp[j][(i+n-v[j])%n]=1;
            }
        }
    }
    if(dp[m][1])cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}