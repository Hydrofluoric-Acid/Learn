#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll a[32]={1};
ll f(int k){
    /* ll res=0;
    for(int i=0;i<31;i++){
        int t=((k>>i)&1)^1;
        res+=a[i]*t;
    }
    return res; */
    return 2147483647^k;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;i<32;i++){
        a[i]=a[i-1]*2;
    }
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,x;
        cin>>n;
        map<ll,int> mp;
        set<ll> s;
        for(int i=0;i<n;i++){
            cin>>x;
            s.insert(x);
            mp[x]++;
        }
        for(auto k:s){
            if(mp[k]){
                ll g=f(k),tmp=min(mp[g],mp[k]);
                ans+=tmp;
                mp[g]-=tmp,mp[k]-=tmp;
                ans+=mp[g]+mp[k];
                mp[g]=0,mp[k]=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}