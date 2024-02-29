#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+1;
        if(!(i&1)){
            dp[i]=min(dp[i],dp[i/2]+1);
        }
    }
    cout<<dp[n];
    return 0;
}