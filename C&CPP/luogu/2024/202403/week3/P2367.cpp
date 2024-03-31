#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,p;
    cin>>n>>p;
    vector<int> v(n+1,0),b(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        b[i]=v[i]-v[i-1];
    }
    while(p--){
        int x,y,z;
        cin>>x>>y>>z;
        b[x]+=z,b[y+1]-=z;
    }
    int ans=101;
    for(int i=1;i<=n;i++){
        b[i]+=b[i-1];
        ans=min(ans,b[i]);
    }
    cout<<ans;
    return 0;
}