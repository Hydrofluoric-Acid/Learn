#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 5500;
using namespace std;
ll a[N],b[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll ans=LLONG_MAX;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        memset(b,0,sizeof(b));
        ll cnt=0;
        for(int j=i+1;j<=n;j++){
            ll k=b[j-1]/a[j]+1;
            b[j]=k*a[j];
            cnt+=k;
        }
        for(int j=i-1;j>=1;j--){
            ll k=b[j+1]/a[j]+1;
            b[j]=k*a[j];
            cnt+=k;
        }
        ans=min(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}