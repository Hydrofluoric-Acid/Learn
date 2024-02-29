/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 210;
using namespace std;
int a[N],f[N][N];
int dfs(int l,int r){
    if(f[l][r])return f[l][r];
    if(l==r-1)return a[l]*a[r]*a[r+1];
    int res=0;
    for(int k=l;k<r;k++){
        res=max(res,dfs(l,k)+dfs(k+1,r)+a[l]*a[k+1]*a[r+1]);
    }
    return f[l][r]=res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i+n]=a[i];
    }
    dfs(1,2*n);
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,f[i][i+n-1]);
    }
    cout<<ans;
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(2*n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v[i+n]=v[i];
    }
    vector<vector<int>> dp(n*2+1,vector<int>(n*2+1,0));
    for(int len=3;len<=n+1;len++){
        for(int i=1;i+len-1<=n*2;i++){
            int l=i,r=i+len-1;
            for(int k=l+1;k<r;k++){
                dp[l][r]=max(dp[l][r],dp[l][k]+dp[k][r]+v[l]*v[k]*v[r]);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,dp[i][i+n]);
    }
    cout<<ans;
    return 0;
}