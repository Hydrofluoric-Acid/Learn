#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T,M;
    cin>>T>>M;
    vector<int> t(M+1),w(M+1);
    for(int i=1;i<=M;i++){//下标从1开始
        cin>>t[i]>>w[i];
    }
    /* vector<vector<int>> dp(M+1,vector<int>(T+1,0));
    for(int i=1;i<=M;i++){
        for(int j=0;j<=T;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=t[i])dp[i][j]=max(dp[i-1][j],dp[i-1][j-t[i]]+w[i]);
        }
    } */
    vector<int> dp(T+1,0);
    for(int i=1;i<=M;i++){
        for(int j=T;j>=0;j--){
            if(j>=t[i])dp[j]=max(dp[j],dp[j-t[i]]+w[i]);
        }
    }
    cout<<dp[T];
    //cout<<dp[M][T];
    return 0;
}