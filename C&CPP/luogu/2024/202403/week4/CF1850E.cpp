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
        int n,x;
        ll c,s=0,sq=0;
        cin>>n>>c;
        for(int i=0;i<n;i++){
            cin>>x;
            s+=x;
            sq+=x*x;
        }
        ll A=4*n,B=4ll*s,C=sq-c;
        ll ans=(ll)((sqrt(s*s/4/n/n+(c-sq)/4/n)-s/2/n));
        cout<<ans<<endl;
        /* ll l=0,r=1e9,ans=0;
        while(l<=r){
            ll mid=l+r>>11;
            ll tmp=sq+4ll*mid*s+4ll*n*mid*mid;
            //cout<<mid<<endl;
            if(tmp==c){
                ans=mid;
                break;
            }else if(tmp>c){
                r=mid;
            }else l=mid-1;
        }
        cout<<ans<<endl; */
    }
    return 0;
}