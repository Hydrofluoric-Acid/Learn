#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,string> mp;
    for(int i=0;i<3;i++){
        string a,b;
        cin>>a>>b;
        mp[b]=a;
    }
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(mp[s]!="")cout<<mp[s];
        else cout<<"Fake";
        cout<<endl;
    }
    return 0;
}