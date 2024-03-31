#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,pk=0;
    cin>>n;
    ll ans=n;
    while(true){
        ans+=n/3;
        n=n/3+n%3;
        if(n<3)break;
    }
    cout<<ans;
    return 0;
}