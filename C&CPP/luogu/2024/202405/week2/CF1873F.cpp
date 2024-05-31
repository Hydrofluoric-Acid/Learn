#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll a[N];
int h[N],n,k;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            a[i]+=a[i-1];
        }
        if(n==1){
            if(a[1]<=k)cout<<1<<endl;
            else cout<<0<<endl;
            continue;
        }
        for(int i=1;i<=n;i++)cin>>h[i];
        int ans=0;
        for(int i=1,l=1,r;i<=n;i++){
            r=i;
            if(a[i-1]%a[i])l=r;
            while(s[r]-s[l-1]>k)l++;
            ans=max(ans,r-l+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}