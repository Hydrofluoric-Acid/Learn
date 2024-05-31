#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll mul(ll a,ll b,ll p){
    ll res=0;
    for(;b;b>>=1){
        if(b&1)res=(res+a)%p;
        a=a*2%p;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,p;
    cin>>a>>b>>p;
    cout<<mul(a,b,p);
    return 0;
}