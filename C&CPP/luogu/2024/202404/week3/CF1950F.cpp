#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c!=a+1){
        cout<<-1<<endl;
        return;
    }
    if(a==0){
        cout<<b<<endl;
        return;
    }
    int ans=log2(a)+1;
    if(b==0){
        cout<<ans<<endl;
        return;
    }
    int x=1,f,z;
    while(true){
        if(a<=x){
            z=a*2+(x-a);
            f=x-a;
            break;
        }
        a-=x;
        x*=2;
    }
    b-=f;
    if(b<=0){
        cout<<ans<<endl;
        return;
    }
    cout<<ans+(b+z-1)/z<<endl;
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