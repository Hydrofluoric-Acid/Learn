#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
ll C(ll a){
    if(a&1){
        return (a-1)/2*a;
    }else return a/2*(a-1);
}
void solve(){
    int n;
    cin>>n;
    set<int,int> s0,s1,s2;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll ans=0;
    for(int i=1;i+2<=n;i++){
        if(a[i+1]==a[2]&&a[i+2]==a[3])s0.insert(a[i]);
        if(a[i]==a[1]&&a[i+2]==a[3])s1.insert(a[i+1]);
        if(a[i]==a[1]&&a[i+1]==a[1])s2.insert(a[i+2]);
    }
    ll a=s0.size(),b=s1.size(),c=s2.size();
    ans+=C(a)+C(b)+C(c);
    cout<<ans<<endl;
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