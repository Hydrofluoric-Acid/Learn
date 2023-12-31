#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int ans=-1;
    vector<int> dp(s.length()+1,0);
    if(s[0]>='0'&&s[0]<='9')dp[0]=1;
    for(int i=1;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            dp[i]=dp[i-1]+1;
        }else{
            dp[i]=0;
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}