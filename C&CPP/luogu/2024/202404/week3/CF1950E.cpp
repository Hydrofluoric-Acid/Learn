#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            string a=s.substr(0,i);
            string b=s.substr(i,i);//如果i是答案字符串的长度，a，b至少有一个是答案
            int fa=0,fb=0;
            for(int j=0;j*i<n;j++){
                string t=s.substr(j*i,i);
                for(int k=0;k<t.length();k++){
                    fa+=(a[k]!=t[k]);
                    fb+=(b[k]!=t[k]);
                }
            }
            if(fa<=1||fb<=1){
                cout<<i<<endl;
                return;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}