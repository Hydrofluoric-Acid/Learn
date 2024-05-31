#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<"NO"<<endl;
        return;
    }
    if((n-m)%2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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