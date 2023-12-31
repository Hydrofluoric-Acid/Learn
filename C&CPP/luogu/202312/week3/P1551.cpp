#include <bits/stdc++.h>
using namespace std;
vector<int> v(5001);
/* int find(int x) {
    if (v[x] == x)
        return x;
    else
        return find(v[x]);//原始版本
} */
int find(int x) {
    if (v[x] == x)
        return x;
    else
        return v[x] = find(v[x]);  // 路径压缩
}
void merge(int i, int j) {
    v[find(i)] = find(j);  // 把v[i]指向‘帮主’的索引j
}
int main() {
    int n, m, p, i1, j1;
    cin >> n >> m >> p;
    for (int i = 1; i < n; i++) {
        v[i] = i;
    }
    for (int i = 0; i < m; i++) {
        cin >> i1 >> j1;
        merge(j1, i1);
    }
    for (int i = 0; i < p; i++) {
        cin >> i1 >> j1;
        if (find(i1) == find(j1)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}