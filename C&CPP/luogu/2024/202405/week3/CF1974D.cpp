#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0){
        cout<<0<<endl;
        return;
    }
    for(int i=1;i;i++){
        if(i*2>=y&&i*15-y*4>=x){
            cout<<i<<endl;
            return;
        }
    }
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