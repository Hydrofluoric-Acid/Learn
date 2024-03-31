/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 2e9+10, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;ll x;
        cin>>n>>x;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll l=0,r=2e9+7;
        while(l<r){
            ll mid=l+(r-l+1)/2;
            ll tot=0;
            for(int i=0;i<n;i++){
                tot+=max(mid-v[i],0ll);
            }
            if(tot<=x)l=mid;
            else r=mid-1;
        }
        cout<<l<<endl;
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 2e9+10, N = 1e5 + 5;
using namespace std;
bool check(vector<int> v,int x,int h){
    ll tot=0;
    for(int i=0;i<v.size();i++){
        tot+=max(h-1ll*v[i],0ll);
    }
    return tot<=x;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll l=0,r=2e9+7;
        while(l<r){
            ll mid=l+(r-l+1)/2;
            if(check(v,x,mid)){
                l=mid;
            }else r=mid-1;
        }
        cout<<l<<endl;
    }
    return 0;
}