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
        int n;
        ll x,y;
        cin>>n>>x>>y;
        vector<ll> v(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        map<pair<ll,ll>,int> mp;
        ll ans=0;
        for(int i=n;i>=1;i--){
            int a=(x-v[i]%x)%x,b=v[i]%y;
            ans+=mp[{a,b}];
            mp[{v[i]%x,v[i]%y}]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
/* #include <bits/stdc++.h>
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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((v[i]+v[j])%x==0&&(v[i]-v[j])%y==0){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
} */