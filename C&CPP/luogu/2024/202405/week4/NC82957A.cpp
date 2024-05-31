#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;i<=9;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        cout<<a[s[i]-'0'];
    }
    return 0;
}