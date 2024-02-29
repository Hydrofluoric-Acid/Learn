/* #include <bits/stdc++.h>
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
    vector<int> v(n+1),s(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(n+1,N));
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(int k=i;k<j;k++){
                if(i==j){
                    dp[i][j]=0;
                    continue;
                }else{
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+s[j]-s[i-1]);
                    //i=1,j=2,dp[1][2]=min(dp[1][2],dp[1][1]+dp[2][2]+s[2]-s[0]),但dp[2][2]还未计算，解法不行
                }
                
            }
        }
    }
    cout<<dp[1][n];
    return 0;
} */
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
    vector<int> v(n+1),s(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(n+1));
    for(int len=2;len<=n;len++){
        for(int i=1;i+len-1<=n;i++){
            int l=i,r=i+len-1;
            dp[l][r]=1e8;
            for(int k=l;k<r;k++){
                dp[l][r]=min(dp[l][r],dp[l][k]+dp[k+1][r]+s[r]-s[l-1]);
            }
        }
    }
    cout<<dp[1][n]<<endl;
    /* for(int len=2;len<=n;len++){
        for(int i=1;i+len-1<=n;i++){
            int l=i,r=i+len-1;
            dp[l][r]=-1e8;
            for(int k=l;k<r;k++){
                dp[l][r]=max(dp[l][r],dp[l][k]+dp[k+1][r]+s[r]-s[l-1]);
            }
        }
    }
    cout<<dp[1][n]; */
    return 0;
}