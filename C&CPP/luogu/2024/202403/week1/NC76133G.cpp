#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
ll jc[N],tong[4];
ll fastpow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1)res=res*a%mod;
        b>>=1;
        a=a*a%mod;
    }
    return res;
}
ll inv(ll a){
    return fastpow(a,mod-2);
}
ll C(ll n,ll m){
    return jc[n]*inv(jc[n-m])%mod*inv(jc[m])%mod;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    jc[0]=1;
    for(int i=1;i<=N;i++){
        jc[i]=i*jc[i-1]%mod;
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        tong[x]++;
    }
    ll c1=fastpow(2,tong[1]),c2=0,c3=0;
    for(int i=0;i<=tong[2];i++){
        c2+=C(tong[2],i)*(i+1)%mod;
        c2%=mod;
    }
    for(int i=0;i<=tong[3];i++){
        c3+=C(tong[3],i)*(i+1)%mod;
        c3%=mod;
    }
    cout<<c2*c3%mod*c1%mod-1;
    return 0;
}
//https://ac.nowcoder.com/acm/contest/76133/G