#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,p,q;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));//dp[i][j]表示v[i]到v[i+j-1]的最大连续子序列长度
    for(int i=1;i<=n;i++){
        dp[i][1]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            if(v[j+i-1]>v[j+i-2]){
                dp[i][j]=dp[i][j-1]+1;//dp[i][j]，若v[j+i-1]>v[j+i-2]，子问题加一
            }
            if(dp[i][j]>ans){
                ans=dp[i][j];
                p=i,q=j;
            }
        }
    }
    //难得一次独立解决动态规划问题，耗时22分钟，菜狗2024/01/06 23:33
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dp[i][j]>ans){
                ans=dp[i][j];
                p=i,q=j;
            }
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    //cout<<ans<<endl;
    
    for(int i=0;i<q;i++){
        cout<<v[p+i];
        if(i!=q-1)cout<<" ";
    }
    return 0;
}