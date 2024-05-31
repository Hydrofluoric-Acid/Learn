#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll dp[110];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=100;i++){
        dp[i]=((i-1)*(dp[i-1]+dp[i-2]))%mod;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}