#include <bits/stdc++.h>
using namespace std;
//int ans = INT_MIN;
/* int dfs(int index, int len, vector<int> &v){
    int res;
    if (index + len >= v.size() || index >= v.size()){
        res = -1;
    }else{
        res = max(v[index + len - 1] + dfs(index, len - 1, v), res);
    }
    return res;
} */
int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    //cout << dfs(0, 0, v);

    int ans=INT_MIN;
    /* for(int i=0;i<n;i++){
        vector<int> dp(n+1,0);
        dp[1]=v[i];
        for(int j=2;j<=n;j++){
            dp[j]=dp[j-1];
            if(i+j<=n)dp[j]=dp[j-1]+v[i+j-1];
        }
        for(int j=0;j<=n;j++){
            ans=max(ans,dp[j]);
        }
    } */



    /* for(int i=0;i<n;i++){
        vector<int> dp(n+1,INT_MIN);
        dp[1]=v[i];
        for(int j=2;j<=n-i;j++){
            dp[j]=dp[j-1]+v[i+j-1];
        }
        for(int j=0;j<=n-i;j++){
            ans=max(ans,dp[j]);
        }
    } */
    //2/5 TLE 本质还是暴力枚举 从N*N数组到N数组，优化








   /*  vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int i=0;i<n;i++){
        dp[i][1]=v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=2;j<=n;j++){
            dp[i][j]=dp[i][j-1]+v[i+j-1];
            if(i+j>n){
                dp[i][j]=dp[i][j-1];
                continue;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            ans=max(ans,dp[i][j]);
            printf("%3d",dp[i][j]);
            //cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    } */



    cout<<ans;
    return 0;
}