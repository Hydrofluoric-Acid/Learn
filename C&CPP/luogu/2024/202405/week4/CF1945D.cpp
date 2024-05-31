#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll a[N],b[N];
void solve(){
    int n,m;
    cin>>n>>m;
    int pos=n+1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
        b[i]+=b[i-1];
    }
    ll ans=0;
    for(int i=n;i>=m;i--){
        if(a[i]-a[i-1]<b[i]-b[i-1]){
            ans+=a[i]-a[i-1]+b[pos-1]-b[i];
            pos=i;
        }
    }
    if(pos!=m){
        ans+=a[m]-a[m-1]+b[pos-1]-b[m];
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}