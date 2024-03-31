#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int l=0,r=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        while(v[l]<v[i]-c&&l<n)l++;
        while(v[r]<=v[i]-c&&r<n)r++;
        if(v[i]-v[l]==c){
            ans+=r-l;
        }
    }
    cout<<ans;
    return 0;
}