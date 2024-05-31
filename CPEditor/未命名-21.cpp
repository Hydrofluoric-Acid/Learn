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
        int n;
        ll k,s=0;
        cin>>n>>k;
        vector<int> v(n+1,0);
        vector<ll> qz(n+1,0),hz(n+2,0);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            qz[i]=qz[i-1]+v[i];
        }
        if(k>=qz[n]){
            cout<<n<<endl;
            continue;
        }
        ll l=k>>1,r=k>>1;
        if(k&1)l++;
        for(int i=n;i>=1;i--){
            hz[n-i+1]=hz[n-i]+v[i];
        }
        int li=lower_bound(qz.begin(),qz.end(),l)-qz.begin();
        if(l==qz[li])li++;
        int ri=lower_bound(hz.begin(),hz.end(),r)-hz.begin();
        ri=n-ri+1;
        if(r==hz[n-ri+1])ri--;
        cout<<(n-(ri-li+1))<<endl;
    }
    return 0;
}