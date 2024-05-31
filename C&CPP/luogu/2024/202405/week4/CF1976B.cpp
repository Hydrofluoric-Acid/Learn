#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N],b[N];
void solve(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n+1;i++){
        cin>>b[i];
    }
    ll ans=0,g=1e9;
    for(int i=1;i<=n;i++){
        ans+=abs(a[i]-b[i]);
        g=min(g,1ll*abs(b[n+1]-a[i]));
        g=min(g,1ll*abs(b[n+1]-b[i]));
        if((a[i]>=b[n+1]&&b[i]<=b[n+1])||(a[i]<=b[n+1]&&b[i]>=b[n+1]))g=0;
    }

    //cout<<ans<<' '<<g<<' '<<h<<endl;
    cout<<ans+g+1<<endl;
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