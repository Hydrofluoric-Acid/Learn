#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int ishw(string s){
    for(int i=0;i*2+1<s.length();i++){
        if(s[i]!=s[s.length()-i-1])return i;
    }
    return -1;
}
void solve(){
    int n,cnt0=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='0')cnt0++;
    }
    if(cnt0&1&&cnt0>1)cout<<"ALICE"<<endl;
    else cout<<"BOB"<<endl;
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