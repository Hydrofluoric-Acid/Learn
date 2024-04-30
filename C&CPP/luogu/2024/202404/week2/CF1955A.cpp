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
        int n,a,b;
        cin>>n>>a>>b;
        ll ans=0;
        if(a*2>b){
            ans+=n/2*b;
            n%=2;
        }
        ans+=n*a;
        cout<<ans<<endl;
    }
    return 0;
}