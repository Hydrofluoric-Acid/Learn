#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve(){
    int q;
    cin>>q;
    char c;
    int l,r;
    multiset<int> sl,sr;
    while(q--){
        cin>>c>>l>>r;
        if(c=='-'){
            sl.erase(sl.find(l));
            sr.erase(sr.find(r));
        }else{
            sl.insert(l);
            sr.insert(r);
        }
        if(!sl.empty()&&!sr.empty()&&*sr.begin()<*(--sl.end())){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}