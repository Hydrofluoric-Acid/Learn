#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool check1(char c){
    return c>='A'&&c<='Z';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int ans=0;
    for(int i=s.length()-1;i>0;i--){
        if(isupper(s[i])&&isupper(s[i-1])){
            s[i-1]=' ';ans++;
        }else if(isupper(s[i])&&islower(s[i-1])){
            s[i]=' ';ans++;
        }
    }
    cout<<ans;
    return 0;
}