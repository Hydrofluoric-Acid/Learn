#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    ll ans=0;
    int pos=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='R'&&pos<n){
            pos++; 
        }
        if(s[i]=='L'&&pos>1){
            pos--;
        }
        ans+=a[pos];
    }
    cout<<ans;
    return 0;
}