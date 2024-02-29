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
    vector<int> nums(n+1);
    for(int i=1;i<=n;i++){
        cin>>nums[i];
    }
    vector<int> dp(n+1,0);
    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<i;j++){
            if(nums[j]<nums[i]){
                dp[i]=max(dp[j]+1,dp[i]);
            }
        }
    }
    int ans=1; 
    for(int i=1;i<=n;i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}