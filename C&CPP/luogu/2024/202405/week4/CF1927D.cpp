#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N],b[N];
void solve(){
    int n,q;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int l=1,r=2;l<=n;r++){
        while(a[r]!=a[l]){
            b[l++]=r;
        }
    }
    cin>>q;
    while(q--){
        int x,y;cin>>x>>y;
        if(b[x]>y||b[x]==-1)cout<<"-1 -1\n";
        else cout<<x<<' '<<b[x]<<endl;
    }
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}