#include <bits/stdc++.h>
using namespace std;
vector<char> v(32);
map<char, int> mp;
void dfs(int x) {
    if (v[x] == '*') {
        return;
    }
    cout<<v[x];
    dfs(2 * x);
    dfs(2 * x + 1);
}
int main() {
    int n;
    cin >> n;
    char root, r, right, left;
    cin >> root >> left >> right;
    v[1] = root, v[2] = left, v[3] = right, mp[root] = 1, mp[left] = 2, mp[right] = 3;
    r = root;
    n -= 1;
    while (n--) {
        cin >> root >> left >> right;
        if (root != '*') {
            v[mp[root] * 2] = left, v[mp[root] * 2 + 1] = right, mp[left] = mp[root] * 2, mp[right] = mp[root] * 2 + 1;
        }
    }
    dfs(1);
    return 0;
}