#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
ll fastpow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1)res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res%mod;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll ans=fastpow(2,n)-1-n-n*(n-1)/2;
    cout<<(ans%mod+mod)%mod;
    return 0;
}