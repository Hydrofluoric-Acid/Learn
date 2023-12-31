#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ans = 0;
    cin >> n;
    unordered_map<string, int> u;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        u[s] = 1;
    }
    unordered_map<string, int>::iterator it;
    for (it = u.begin(); it != u.end(); it++) {
        ans += it->second;
    }
    cout << ans;
    return 0;
}