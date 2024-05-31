#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve(){
    int c[210];
    map<int,int> mp;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>c[i];
        mp[c[i]]=1;
    }
    for(int i=n;i<n+m;i++){
        cin>>c[i];
        mp[c[i]]=2;
    }
    sort(c,c+n+m);
    for(int i=0;i<n+m-1;i++){
        if(mp[c[i]]==1&&mp[c[i+1]]==1){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}