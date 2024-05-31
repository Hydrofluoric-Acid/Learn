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
    ll ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    map<pair<int,int>,map<int,int>> mp;
    for(int i=1;i+2<=n;i++){
        mp[{a[i],a[i+1]}][a[i+2]]++;
    }
    for(auto k:mp){
        if(k.second.size()==1)continue;
        ll ttt=1;
        for(auto g:k.second){
            ttt*=g.second;
        }
        ans+=ttt*(k.second.size()-1)*k.second.size();
    }
    mp.clear();
    for(int i=1;i+2<=n;i++){
        mp[{a[i],a[i+2]}][a[i+1]]++;
    }
    for(auto k:mp){
        if(k.second.size()==1)continue;
        ll ttt=1;
        for(auto g:k.second){
            ttt*=g.second;
        }
        ans+=ttt*(k.second.size()-1)*k.second.size();
    }
    mp.clear();
    for(int i=1;i+2<=n;i++){
        mp[{a[i+1],a[i+2]}][a[i]]++;
    }
    for(auto k:mp){
        if(k.second.size()==1)continue;
        ll ttt=1;
        for(auto g:k.second){
            ttt*=g.second;
        }
        ans+=ttt*(k.second.size()-1)*k.second.size();
    }
    cout<<ans/2<<endl;
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