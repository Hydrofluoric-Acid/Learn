#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int V,n;
    cin>>V>>n;
    vector<int> w(n+1);
    for(int i=1;i<=n;i++){
        cin>>w[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(V+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=V;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=w[i]){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+w[i]);
            }
        }
    }
    cout<<(V-dp[n][V]);
    return 0;
}