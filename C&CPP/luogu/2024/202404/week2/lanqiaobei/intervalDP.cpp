#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n+1),s(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(n+1));//dp[i][j]表示[i,j]区间合并的最小值
    for(int len=2;len<=n;len++){//枚举长度
        for(int i=1;i+len-1<=n;i++){//枚举左端点l
            int l=i,r=i+len-1;
            dp[l][r]=inf;
            for(int k=l;k<r;k++){//枚举中间点k
                dp[l][r]=min(dp[l][r],dp[l][k]+dp[k+1][r]+s[r]-s[l-1]);
            }
        }
    }
    cout<<dp[1][n];
    return 0;
}