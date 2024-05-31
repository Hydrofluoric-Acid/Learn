#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N],b[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    ll ans=0,s=0;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        s+=a[i];
    }
    for(int i=1;i<=n;i++){
        ans=max(ans,s-a[i]+b[i]);
    }
    cout<<ans;
    return 0;
}