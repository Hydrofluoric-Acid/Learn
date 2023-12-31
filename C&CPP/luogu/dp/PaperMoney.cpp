#include<bits/stdc++.h>
using namespace std;
int n,w,k[10100];
#define inf 1e9
vector<int> a(n);
int solve1(int w){
    int ans=inf;
    if(w==0)return 0;
    if(w<0){
    return inf;
    }for(int i=0;i<n;i++){
        int tmp=solve1(w-a[i]);
        if(tmp==-1)continue;
        ans=min(ans,1+tmp);
    }
    return ans;
}
int solve2(int x){
    int ans=inf;
    if(x==0)return 0;
    if(k[x]!=-1)return k[x];
    if(x<0){
        k[x]=inf;
        return inf;    
    }
    for(int i=0;i<n;i++){
        if(x-a[i]>=0){
            int tmp=solve2(x-a[i]);
            if(tmp==-1)continue;
            ans=min(ans,1+tmp);
        }
    }
    return k[x] = (ans == inf) ? -1 : ans;
}
int solve3(int x){
    vector<int> dp(x+1,inf);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-a[j]>=0){
                dp[i]=min(dp[i],1+dp[i-a[j]]);
            }
        }
    }
    return dp[x]==inf?-1:dp[x];
}
int main(){
    cin>>n>>w;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve1(w)<<endl;
    memset(k,-1,sizeof(k));
    cout<<solve2(w)<<endl;
    cout<<solve3(w)<<endl;
    return 0;
}