#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 110;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int dp[N][N][N];
    memset(dp,0,sizeof(dp));
    dp[0][0][2]=1;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		for(int k=0;k<N;k++){
    			if(k%2==0){
    				dp[i][j][k]+=dp[i-1][j][k/2];
    				dp[i][j][k]%=mod;
				}
				if(k>=1){
					dp[i][j][k]+=dp[i][j-1][k-1];
				}
				dp[i][j][k]%=mod;
			}
		}
	}
	cout<<dp[n][m-1][1];
    return 0;
}