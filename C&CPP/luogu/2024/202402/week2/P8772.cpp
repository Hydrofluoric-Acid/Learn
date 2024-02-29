#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<ll> v(n+1),q(n+1,0),s(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        q[i]+=q[i-1]+v[i];
    }
    s[1]=0;
    for(int i=2;i<=n;i++){
        s[i]=s[i-1]+1ll*q[i-1]*v[i];
    }
    cout<<s[n];
    return 0;
}