#include <bits/stdc++.h>
#define endl "\n"
typedef unsigned long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
ll fastc(ll a,ll b,ll p){
    ll res=0;
    while(b){
        if(b&1)res=(res+a)%p;
        a=a*2%p;
        b>>=1;
    }
    return res;
}
ll fastpow(ll a,ll b,ll p){
    ll res=1;
    while(b){
        if(b&1){
            res=fastc(res,a,p);
        }
        a=fastc(a,a,p);
        b>>=1;
    }
    return res%p;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,p;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b>>p;
        cout<<fastpow(a,b,p)<<endl;
    }
    
    return 0;
}