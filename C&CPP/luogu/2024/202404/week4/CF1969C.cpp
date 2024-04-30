#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 3e5 + 5;
using namespace std;
int a[N],vis[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        ll ans=0;
        cin>>n>>k;
        memset(vis,0,sizeof vis);
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans+=a[i];
        }
        for(int i=0;i<k;i++){
            int g=0,k=-1;
            for(int j=1;j<n-1;j++){
                g=max(g,max(abs(a[j]-a[j-1]),abs(a[j]-a[j+1])));
            }
            g=max(g,max(abs(a[1]-a[0]),abs(a[n-1]-a[n-1])));
            //cout<<g<<endl;
            ans-=g;
        }
        cout<<ans<<endl;
    }
    return 0;
}