#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll C(int n){
    if(n<2)return 0;
    return 1ll*n*(n-1)/2;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll md=0,mx=0;
    if(n!=m){
        md=C(n-m+1);
        mx=(n%m)*C(n/m+1)+(m-n%m)*C(n/m); 
    } 
    cout<<mx<<' '<<md;
    return 0;
}