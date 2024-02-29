#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e9;
using namespace std;
int amount=11;
vector<int> coins={1,2,5};
vector<int> dp(amount+1,-1);
int dfs(int x){
    if(x>=0&&dp[x]!=-1){
        return dp[x];
    }
    if(x<0){
        return N;
    }else if(x==0){
        return 0;
    }else{
        int t=N;
        for(int i=0;i<3;i++){
            if(x>=coins[i]){
                t=min(t,dfs(x-coins[i]));
            }
        }
        dp[x]=t+1;
        return t+1;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<dfs(amount);
    return 0;
}