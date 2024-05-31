#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e3 + 5;
using namespace std;
int l[N],r[N],n;
bool check(int x){
    int posl=0,posr=0;
    for(int i=1;i<=n;i++){
        posl=posl-x,posr=posr+x;
        if(posl>r[i]||posr<l[i])return false;
        posl=max(posl,l[i]),posr=min(posr,r[i]);
    }
    return true;
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>l[i]>>r[i];
    }
    int l=0,r=1e9;
    while(l<r){
        int mid=l+r>>1;
        if(check(mid)){
            r=mid;
        }else l=mid+1;
    }
    cout<<r<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}