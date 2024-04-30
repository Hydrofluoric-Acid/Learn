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
        ll ans=k;
        while(true){
            ans+=k/n;
            k=k/n+k%n;
            if(k<n)break;
        }
        cout<<ans<<endl;
    }
    return 0;
}