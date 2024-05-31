/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve(){
    int n,a[3];
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    for(int i)
    int ans=0;
    for(int i=0;i<=n/a;i++){
        for(int j=0;j<=(n-i*a)/b;j++){
            for(int k=0;k<=(n-i*a-j*b);k++){
                if(i*a+j*b+k*c<=n){
                    ans=max(ans,i+j+k);
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve(){
    int n,a[4],dp[4010];
    cin>>n;
    for(int i=1;i<=3;i++){
        cin>>a[i];
    }
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    for(int i=1;i<=3;i++){
        for(int j=a[i];j<=n;j++){
            if(dp[j-a[i]]!=-1){
                dp[j]=max(dp[j],dp[j-a[i]]+1);
            }
        }
    }
    cout<<dp[n];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}