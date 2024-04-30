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
    if(s[0]-'0'>=5&&s[0]-'0'<=8){
        s[0]=9-(s[0]-'0')+'0';
    }
    for(int i=1;i<s.length();i++){
        if(s[i]-'0'>=5){
            s[i]=9-(s[i]-'0')+'0';
        }
    }
    cout<<s;
    return 0;
}