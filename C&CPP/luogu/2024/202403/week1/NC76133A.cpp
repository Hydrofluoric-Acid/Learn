#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int len=s.length();
    cout<<s.substr(0,len/2);
    cout<<endl;
    cout<<s.substr(len/2+1,len/2);
    return 0;
}