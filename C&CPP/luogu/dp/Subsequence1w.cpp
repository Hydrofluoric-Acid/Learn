#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,p,q,t1=1,t2=0;
    cin>>n;
    vector<int> v(n+1),dp(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=2;j<=n;j++){
            if(v[j+i-1]>v[j+i-2]){
                t2=t1+1;
            }else{
                t2=0;
            }
            if(t2>ans){
                ans=t2,p=i,q=j;
            }
            t1=t2;
        }
    }
    /* for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dp[j]=0;
        }
        //dp.assign(n+1,0);
        dp[1]=1;
        /* for(int j=1;j<=n-i+1;j++){
            cout<<dp[j]<<" ";
        } 
        //cout<<endl;
        for(int j=1;j<=n-i+1;j++){
            if(v[j+i-1]>v[j+i-2]){
                dp[j]=dp[j-1]+1;
            }
            if(dp[j]>ans){
                ans=dp[j];
                p=i,q=j;
            }
            //cout<<dp[j]<<" ";
        }
        //cout<<endl;
    } */
    
    //难得一次独立解决动态规划问题，耗时22分钟，菜狗2024/01/06 23:33
    /* for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dp[i][j]>ans){
                ans=dp[i][j];
                p=i,q=j;
            }
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    } */
    //cout<<ans<<endl;
    
    for(int i=0;i<q;i++){
        cout<<v[p+i];
        if(i!=q-1)cout<<" ";
    }
    return 0;
}