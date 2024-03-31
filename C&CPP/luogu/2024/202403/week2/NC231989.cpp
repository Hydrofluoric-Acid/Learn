#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
void solve(){
    ll a,b,target;
    cin>>a>>b>>target;
    int res=0;
    if(a==target||b==target){
        res=0;
    }else if(target&1){
        res=-1;
    }else{
        while(a!=target&&b!=target){
            res++;
            if((a+b)*2<target){
                a*=2,b*=2;
            }else break;
        }
    }
    cout<<res<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}