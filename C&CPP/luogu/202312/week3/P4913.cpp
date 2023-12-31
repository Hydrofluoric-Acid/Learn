#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int index, left, right;
} node;
int n, ans = 0;
vector<node> v(n + 1);
int dfs(int x) {
    if (x == 0) {
        return 0;
    } else
        return max(dfs(v[x].left), dfs(v[x].right)) + 1;
}
void dfs1(int x, int deep) {
    if (!x)
        return;
    ans = max(ans, deep);
    dfs1(v[x].left, deep + 1);
    dfs1(v[x].right, deep + 1);
}
int dfs2(int x) {
    int l = 0, r = 0;
    if (x == 0)
        return 0;
    else {
        l = dfs2(v[x].left) + 1;
        r = dfs2(v[x].right) + 1;
        return max(l, r);
    }
}
/*

 */
int main() {
    cin >> n;
    v.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i].left >> v[i].right;
        v[i].index = i;
    }
    cout << dfs(1) << endl;
    dfs1(1, 1);
    cout << ans << endl;
    cout << dfs2(1) << endl;
    return 0;
}