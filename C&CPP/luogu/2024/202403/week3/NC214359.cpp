#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b,c="";
    cin>>a>>b;
    int len=max(a.length(),b.length());
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    a.resize(len,'0');//长度可能不一样，需要补0
    b.resize(len,'0');
    for(int i=len-1;i>=0;i--){
        c+=(a[i]-'0'+b[i]-'0')%10+'0';
    }
    int i=0;
    while(c.length()>1&&c[0]=='0')c.erase(0,1);
    cout<<c;
    return 0;
}
//https://ac.nowcoder.com/acm/problem/214359