#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e8, inf = 0x3f3f3f3f, N = 3e5 + 5;
using namespace std;
ll a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    ll ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(int i=n;i>=2;i--){
        ans+=
    }
    cout<<ans%mod;
    return 0;
}