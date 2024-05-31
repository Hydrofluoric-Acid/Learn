#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    set<char> s;
    for (int i = 0; i < n; i++) {
        s.insert(str[i]);
    }
    string tmp = "";
    for (auto k : s) {
        tmp += k;
    }
    //cout<<tmp<<endl;
    map<char, char> mp;
    
    sort(tmp.begin(), tmp.end());
    for (int i = 0; i*2 < tmp.size(); i++) {
        mp[tmp[tmp.size() - i - 1]] = tmp[i];
        mp[tmp[i]]=tmp[tmp.size() - i - 1];
    }
    // for(auto k:mp){
    //     cout<<k.first<<' '<<k.second<<endl;
    // }
    if (tmp.size() & 1)
        mp[tmp[tmp.size() / 2]] = tmp[tmp.size() / 2];
    for (int i = 0; i < n; i++) {
        cout<<mp[str[i]];
    }
    cout<<endl;
    //cout << str << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}