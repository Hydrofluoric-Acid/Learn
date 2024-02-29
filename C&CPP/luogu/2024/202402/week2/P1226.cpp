#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
ll fastpow(ll a,ll b,ll p){
    ll res=1;
    while(b){
        if(b&1){
            res=res*a%p;
        }
        a=a*a%p;
        b>>=1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,p;
    cin>>a>>b>>p;
    printf("%d^%d mod %d=%d",a,b,p,fastpow(a,b,p));
    return 0;
}