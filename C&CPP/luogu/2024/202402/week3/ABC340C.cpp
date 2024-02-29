#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
map<ll,ll> dp;
ll dfs(ll x){
    if(x==0||x==1)return 0;
    if(dp[x])return dp[x];
    ll t=dfs(x/2)+dfs((x+1)/2)+x;
    return dp[x]=t;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll c;
    cin>>c;
    dp[2]=2;
    cout<<dfs(c);
    return 0;
}