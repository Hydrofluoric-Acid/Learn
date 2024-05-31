#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int n=s.length();
    s='0'+s;
    if(s[1]>='5'){
        s[0]='1';
        for(int i=1;i<=n;i++)s[i]='0';
    }else{
        int i=2;
        bool f=false;
        for(i;i<=n;i++){
            if(s[i]>='5'){
                f=true;
                s[i-1]++;
                break;
            }
        }
        for(i;i<=n;i++){
            s[i]='0';
        } 
    }
    int j=1;
    if(s[0]!='0')j=0;
    for(j;j<=n;j++)cout<<s[j];
    return 0;
}