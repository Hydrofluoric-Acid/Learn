#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
ll C[1010][1010],tong[4];
ll fastpow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1)res=res*a%mod;
        b>>=1;
        a=a*a%mod;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(i==j||j==0)C[i][j]=1;
            else C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod;
        }
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        tong[x]++;
    }
    ll ans=0,t=fastpow(2,tong[1]);
    for(int i=0;i<=tong[2];i++){
        for(int j=0;j<=tong[3];j++){
            ans+=C[tong[2]][i]*(i+1)%mod*C[tong[3]][j]%mod*(j+1)%mod*t%mod;
            ans%=mod;
        }
    }
    cout<<ans-1;
    return 0;
}
//https://ac.nowcoder.com/acm/contest/76133/F