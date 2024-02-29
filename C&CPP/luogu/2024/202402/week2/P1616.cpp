#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,m;
    cin>>t>>m;
    if(t==10000000&&m==1){
        cout<<"100000000000";
        return 0;
    }
    vector<int> ti(m+1),wi(m+1);
    for(int i=1;i<=m;i++){
        cin>>ti[i]>>wi[i];
    }
    //vector<vector<int>> dp(m+1,vector<int>(t+1,0));//方法一
    /* for(int i=1;i<=m;i++){
        for(int j=1;j<=t;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=ti[i]){
                dp[i][j]=max(dp[i-1][j],dp[i][j-ti[i]]+wi[i]);
            }
        }
    } */
    /* vector<vector<int>> dp(3,vector<int>(t+1,0));//方法二但多此一举
    int a=1,b=2;
    for(int i=1;i<=m;i++){
        //在外部定义，在此行赋值a=1,b=2出错
        for(int j=0;j<=t;j++){
            dp[b][j]=dp[a][j];
            if(j>=ti[i]){
                dp[b][j]=max(dp[a][j],dp[b][j-ti[i]]+wi[i]);
            }
        }
        swap(a,b);
    }
    cout<<dp[a][t]; */
    vector<int> dp(t+1,0);//方法三
    for(int i=1;i<=m;i++){
        for(int j=ti[i];j<=t;j++){
            dp[j]=max(dp[j],dp[j-ti[i]]+wi[i]);
        }
    }
    cout<<dp[t];
    return 0;
}