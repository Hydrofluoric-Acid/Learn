#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<int> visted;
queue<int> q;
void dfs(int x) {
    if (visted[x] == 1)
        return;
    visted[x] = 1;
    cout << x << " ";
    for (int i = 0; i < v[x].size(); i++) {
        dfs(v[x][i]);
    }
}
void bfs() {
    q.push(1);
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        cout << t << " ";
        for (int i = 0; i < v[t].size(); i++) {
            if(visted[v[t][i]]!=1){
                visted[v[t][i]] = 1;
                q.push(v[t][i]);
            }
            
        }
    }
}
int main() {
    int n, m, x, y;
    cin >> n >> m;
    v.resize(n + 1), visted.resize(n + 1);
    while (m--) {
        cin >> x >> y;
        v[x].push_back(y);
    }
    dfs(1);
    cout << endl;
    visted.assign(n + 1, 0);
    bfs();
    return 0;
}