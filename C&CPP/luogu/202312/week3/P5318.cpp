#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<int> visted,visited;

void dfs(int x) {
    if (visted[x] == 1)
        return;
    visted[x] = 1;
    cout << x << " ";
    for (int i = 0; i < v[x].size(); i++) {
        dfs(v[x][i]);
    }
}
/* void dfs(int x) {
    cout << x << " ";
    for (int i = 0; i < v[x].size(); i++) {
        if (!visted[v[x][i]]) {
            visted[v[x][i]] = 1;
            dfs(v[x][i]);
        }
    }
} */
void bfs() {
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        cout << t << " ";
        for (int i = 0; i < v[t].size(); i++) {
            if (visited[v[t][i]] != 1) {
                visited[v[t][i]] = 1;
                q.push(v[t][i]);
            }
        }
    }
    /* queue<int> q;
    q.push(1);
    visited[1]=1;
    while(q.empty()){
        int x=q.front();q.pop();
        if(visited[x]){
            continue;
        }
        visited[x]=1;
        cout<<x<<" ";
        for(int c:v[x]){
            q.push(c);
        }
    } */
}
int main() {
    int n, m, x, y;
    cin >> n >> m;
    v.resize(n + 1,vector<int>()), visted.resize(n + 1,0),visited.resize(n+1,0);
    while (m--) {
        cin >> x >> y;
        v[x].push_back(y);
    }
    dfs(1);
    cout << endl;
    bfs();
    return 0;
}