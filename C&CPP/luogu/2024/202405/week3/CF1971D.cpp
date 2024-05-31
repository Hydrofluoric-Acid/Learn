#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll ans=1;
        bool flag=false;
        for(int i=0;i+1<s.length();i++){
            ans+=(s[i]!=s[i+1]);
            if(s[i]=='0'&&s[i+1]=='1')flag=true;
        }
        cout<<ans-flag<<endl;
    }
    return 0;
}