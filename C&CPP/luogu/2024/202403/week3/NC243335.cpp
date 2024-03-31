#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2010;
using namespace std;
int dp[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    dp[1]=v[1];
    for(int i=1;i<=n;i++){
        if(i>k){
            dp[i]=max(dp[i-1],dp[i-k-1]+v[i]);
        }else{
            dp[i]=max(dp[i-1],v[i]);
        }
    }
    cout<<dp[n];
    return 0;
}