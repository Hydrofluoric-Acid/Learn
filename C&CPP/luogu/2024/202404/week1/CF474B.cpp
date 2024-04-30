#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<ll> v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        int ans=lower_bound(v.begin()+1,v.end(),q)-v.begin();
        cout<<ans<<endl;
    }
    return 0;
}