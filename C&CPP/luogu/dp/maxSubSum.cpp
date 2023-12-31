#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=INT_MIN;cin>>n;
    vector<int> v(n+1),dp(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        dp[i]=max(dp[i-1]+v[i],v[i]);
        ans=max(ans,dp[i]);
    }
    /* for(int i=0;i<=n;i++){
        cout<<dp[i]<<" ";
    } */
    cout<<ans;
    return 0;
}