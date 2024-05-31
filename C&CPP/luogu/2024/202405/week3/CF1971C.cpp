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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        string s="";
        for(int i=1;i<=12;i++){
            if(i==a||i==b)s+='a';
            if(i==c||i==d)s+='b';
        }
        if(s=="abab"||s=="baba")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}