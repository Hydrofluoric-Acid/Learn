#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 3e5 + 5;
using namespace std;
ll c[N],cnt1[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,q,l,r;
        cin>>n>>q;
        for(int i=1;i<=n;i++){
            cin>>c[i];
            //if(c[i]==1)cnt1[i]=1;
            //cnt1[i]+=cnt1[i-1];为什么两句不等价
            cnt1[i]=cnt1[i-1]+(c[i]==1);
            c[i]+=c[i-1];
            
        }
        while(q--){
            cin>>l>>r;
            if(l==r){
                cout<<"NO"<<endl;
                continue;
            }
            ll len=r-l+1,n1=cnt1[r]-cnt1[l-1],s=c[r]-c[l-1];
            if(s>=len+n1){
                cout<<"YES"<<endl;
            }else cout<<"NO"<<endl;
        }
    }
    return 0;
}