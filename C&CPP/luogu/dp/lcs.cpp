#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    vector<vector<int>> dp(a.length()+1,vector<int>(b.length()+1,0));
    //v[i][j]是a0~ai-1,b0~bj-1的最长公共子序列
    //动态规划数组是设计动态规划算法的关键，需要准确地确定其元素的含义，指定dp[i][j]是
    //a0~ai,b0~bj的最长公共子序列更复杂
    for(int i=1;i<=a.length();i++){
        for(int j=1;j<=b.length();j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    for(int i=1;i<=a.length();i++){
        for(int j=1;j<=b.length();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[a.length()][b.length()];
    return 0;
}
/*
abcbdb
acbbabdbb
 */