#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int n,k,v[N],w[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>v[i]>>w[i];
    }
    ll ans=0;
    for(int i=31;i>=0;i--){
        ans+=(1<<i);
        ll tmp=(1<<30)-1;
        for(int j=1;j<=n;j++){
            if((ans&w[j])==ans){
                tmp&=v[j];
            }
        }
        if(tmp>k){
            ans-=(1<<i);
        }
    }
    cout<<ans;
    return 0;
}