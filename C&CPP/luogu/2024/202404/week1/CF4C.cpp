#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(!mp[s])cout<<"OK"<<endl;
        else cout<<s<<mp[s]<<endl;
        mp[s]++;
    }
    return 0;
}