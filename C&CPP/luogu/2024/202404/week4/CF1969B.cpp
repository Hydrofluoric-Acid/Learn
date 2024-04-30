#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string u=s;
        sort(u.begin(),u.end());
        if(u==s){
            cout<<0<<endl;
            continue;
        }
        int i=0;
        for(i;i<s.length();i++){
            if(s[i]=='1')break;
        }
        ll ans=0;
        int c1=0;
        for(i;i<s.length()-1;i++){
            if(s[i]=='1')c1+=1;
            ans+=(c1+1)*(s[i+1]=='1'?0:1);

        }
        cout<<ans<<endl;
    }
    return 0;
}