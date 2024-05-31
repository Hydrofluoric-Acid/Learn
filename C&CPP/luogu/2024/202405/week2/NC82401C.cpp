#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 998244353, inf = 0x3f3f3f3f, N = 1e6 + 5;
using namespace std;
ll C(int n,int m){
    if(m==3)return 1ll*n*(n-1)*(n-2);
    else return 1ll*n*(n-1);
}
ll fastpow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1)res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        if(m==1){
            cout<<c<<endl;
        }else if(m==2){
            ll up=c+3ll*b;
            if(up%4==0){
                cout<<up/4<<endl;
            }else cout<<1ll*up*fastpow(c,mod-2)%mod<<endl;
        }else{
            ll A=1ll*m*(m-1)*(m-2)*a+3ll*m*(m-1)*b+1ll*m*c;
            ll B=1ll*m*m*m;
            if(A%B==0){
                cout<<A/B<<endl;
            }else cout<<1ll*A*fastpow(B,mod-2)%mod<<endl;
        }
    }
    return 0;
}