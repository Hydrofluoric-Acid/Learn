#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    vector<vector<int>> dp(3,vector<int>(n,0));
    for (int k=1;k<=2;k++) {
        int maxp=v[0];
        for (int i=1;i<n;i++) {
            dp[k][i]=max(dp[k][i-1],v[i]+maxp);
            maxp=max(maxp, dp[k-1][i]-v[i]);
        }
    }
    cout<<dp[2][n-1];
    return 0;
}
