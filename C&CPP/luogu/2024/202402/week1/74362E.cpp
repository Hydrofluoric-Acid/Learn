/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int n,ans=INT_MAX;
vector<int> v,tmp;
void dfs(int x){
    if(x==n+1){
        int k=0,t=0;
        for(int i=1;i<=n;i++){
            if(tmp[i]==-1)t++;
            k+=v[i]*tmp[i];
        }
        if(!k)ans=min(ans,t);
        return;
    }else{
        tmp[x]=-1;
        dfs(x+1);
        tmp[x]=1;
        dfs(x+1);
    }
}
void dfs(int i,int j){
    if(i==0){
        return;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    v.resize(n+1),tmp.resize(n+1,1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    dfs(1);
    if(ans==INT_MAX)cout<<-1;
    else cout<<ans;
    return 0;
} */
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 4000;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,s=0;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]>0){
            s+=v[i];
        }else{
            s-=v[i];
        } 
    }

    vector<vector<int>> dp(n+1,vector<int>(3*s+201,0));
    for(int j=-s;j<=s;j++){
        dp[0][j+2*s]=N;
    }
    for(int i=1;i<=n;i++){
        for(int j=-s;j<=s;j++){
            dp[i][j+2*s]=min(dp[i-1][j+v[i]+2*s]+1,dp[i-1][j-v[i]+2*s]);
        }
    }
    cout<<dp[n][0];//第一次独立写出状态转移方程，可惜没做出来
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 10100;
int f[201][120000];
int a[201];
int M=40000;
int n,m,ans;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int j=-M;j<=M;j++){
        f[0][j+M]=N;
    }
    f[0][M]=0;
    for(int i=1;i<=n;i++){
        for(int j=-M;j<=M;j++){
            f[i][j+M]=min(f[i-1][j+M-a[i]],f[i-1][j+M+a[i]]+1);
        }
    }
    if(f[n][M]==N){
        cout<<-1;
    }else{
        cout<<f[n][M];
    }
    return 0;
}