#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<ll> v(n+1);
        ll t=INT_MIN,mx=INT_MIN,sum=0;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            sum+=v[i];
            sum%=mod;
            t=max(1ll*v[i],t+v[i]);
            mx=max(mx,t);
        }
        if(mx<0)mx=0;
        //cout<<mx<<endl;
        for(int i=0;i<k;i++){
        	sum+=mx;
        	mx*=2;
        	mx%=mod;
        	sum%=mod;
        }
        cout<<(sum%mod+mod)%mod<<endl;
    }
    return 0;
}