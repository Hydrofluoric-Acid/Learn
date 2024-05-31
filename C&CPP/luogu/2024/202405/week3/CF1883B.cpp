#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int g=n-k;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    if(g==1){
        cout<<"YES"<<endl;
        return;
    }
    for(auto k:mp){
        int tmp=min(k.second,g)/2*2;
        g-=tmp;
        k.second-=tmp;
        if(g==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(g==1){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
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