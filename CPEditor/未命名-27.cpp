#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
ll n,m;
pair<string,ll> a[N];
ll calc(int bit,ll now){
    for(int i=1;i<=n;i++){
        ll x=a[i].second>>bit&1;
        if(a[i].first=="AND")now&=x;
        else if(a[i].first=="OR")now|=x;
        else now^=x;
    }
    return now;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        string s;int x;
        cin>>s>>x;
        a[i]=make_pair(s,x);
    }
    ll val=0,ans=0;
    for(int i=29;i>=0;i--){
        ll res0=calc(i,0);
        ll res1=calc(i,1);
        if(val+(1<<i)<=m&&res0<res1){
            val+=1<<i;
            ans+=res1<<i;
        }else ans+=res0<<i;
    }
    cout<<ans<<endl;
    return 0;
}