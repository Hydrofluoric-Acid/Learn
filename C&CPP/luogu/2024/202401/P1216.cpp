#include<vector>
#include<cstdio>
using namespace std;
int main(){
    int n,ans=-1;;
    scanf("%d",&n);
    vector<vector<int>> v(n+1,vector<int>(n+1)),dp(n+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            scanf("%d",&v[i][j]);
        }
    }
    dp[1][1]=v[1][1];
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1){
                dp[i][j]=dp[i-1][j]+v[i][j];
            }else if(j==n){
                dp[i][j]=dp[i-1][j-1]+v[i][j];
            }else{
                dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+v[i][j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        ans=max(ans,dp[n][i]);
    }
    printf("%d",ans);
    return 0;
}