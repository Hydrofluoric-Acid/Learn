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
    ll ans=0;
    ans+=n/100;
    n%=100;
    ans+=n/20;
    n%=20;
    ans+=n/10;
    n%=10;
    ans+=n/5;
    n%=5;
    ans+=n;
    cout<<ans;
    return 0;
}