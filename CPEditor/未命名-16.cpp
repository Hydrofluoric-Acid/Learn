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
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<bool> f(n,false);
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e')f[i]=true;
        }
        for(int i=0;i<n;i++){
            if((s[i]=='b'||s[i]=='c'||s[i]=='d')&&((s[i+1]=='b'||s[i+1]=='c'||s[i+1]=='d')||(i+1==n))){
                f[i-1]=false;
                f[i]=true;
            }
        }
        for(int i=0;i<n;i++){
            cout<<s[i];
            if(f[i]&&i!=n-1)cout<<'.';
        }
        cout<<endl;
    }
    return 0;
}