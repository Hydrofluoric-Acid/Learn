#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
map<int,int> mp;
void solve(){
    string s;
    cin>>s;
    int ans=4;
    for(int i=1;i<4;i++){
        ans+=abs(mp[s[i]-'0']-mp[s[i-1]-'0']);
    }
    ans+=mp[s[0]-'0']-1;
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;i<=9;i++){
        mp[i]=i;
    }
    mp[0]=10;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}