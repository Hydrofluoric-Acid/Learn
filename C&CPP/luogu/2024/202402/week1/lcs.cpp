#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n+1),b(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    /* vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i]==b[j]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    } */

    vector<vector<int>> dp(3,vector<int>(n+1,0));
    int cur=2,pre=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i]==b[j]){
                dp[cur][j]=dp[pre][j-1]+1;
            }else{
                dp[cur][j]=max(dp[pre][j],dp[cur][j-1]);//二维数组优化
            }
        }
        swap(cur,pre);
    }
    cout<<dp[pre][n];
    return 0;
}