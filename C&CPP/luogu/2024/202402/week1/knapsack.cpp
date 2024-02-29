#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,V;
    cin>>n>>V;
    vector<int> v(n+1),w(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i]>>w[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(V+1,0));
    /* for(int i=1;i<=n;i++){
        for(int j=0;j<=V;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=v[i])dp[i][j]=max(dp[i-1][j],dp[i][j-v[i]]+w[i]);
        }
    } */
    for(int i=1;i<=n;i++){
        for(int j=0;j<=V;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=v[i])dp[i][j]=max(dp[i-1][j],dp[i][j-v[i]]+w[i]);
        }
    }
    cout<<dp[n][V];
    return 0;
}