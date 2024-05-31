#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
bool isprime(ll x){
    if(x<2)return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}
void solve(){
    ll x;
    cin>>x;
    ll q=(int)sqrt(x*1.0);
    if(q*q==x&&x!=1&&isprime(q)){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}