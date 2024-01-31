#include <bits/stdc++.h>
#define inf INT_MAX
using namespace std;
typedef struct {
    int p, weight;
} edge;
vector<vector<edge>> g;
vector<int> dis, last;
vector<bool> tag;
int n, m, x, y, z;
void dijkstra(int k) {
    for (int i = 0; i < g[k].size(); i++) {
        if (!tag[g[k][i].p] && dis[k] + g[k][i].weight < dis[g[k][i].p]) {
            dis[g[k][i].p] = dis[k] + g[k][i].weight;
        }
    }
    edge next = {0, inf};
    for (int i = 1; i <= n; i++) {
        if (!tag[i] && dis[i] < next.weight) {
            next.p = i, next.weight = dis[i];
        }
    }
    if (next.p != 0 && next.weight != inf) {//记得检查是否未变化，否则会递归不会终止
        tag[next.p] = true;
        dijkstra(next.p);
    }
    /*
    第一步，找到所有直接相连的节点，如果未标记过且路径长度小于dis中则更新路径长度
    第二步，在剩余未标记的节点中找到dis最小的，标记，重复第一步。
    完全自己写的，用时30分钟，加深理解，视频地址：https://www.bilibili.com/video/BV1zz4y1m7Nq/?spm_id_from=333.337.search-card.all.click&vd_source=ef65fd5035ba38449c8bbb92fe19cf27
    */
}
int main() {
    cin >> n >> m;
    g.resize(n + 1, vector<edge>());
    dis.resize(n + 1, inf), last.resize(n + 1, -1), tag.resize(n + 1, false);
    while (m--) {
        cin >> x >> y >> z;
        g[x].push_back(edge{y, z});//图一是无向图，因此建双边
        g[y].push_back(edge{x, z});
    }
    tag[1] = true, dis[1] = 0, last[1] = -1;
    dijkstra(1);
    for (int i = 1; i <= n; i++) {
        cout << dis[i] << endl;
    }
    return 0;
}
/*
图一：
9 14
1 2 4
1 8 8
2 8 11
2 3 8
8 9 7
8 7 1
3 9 2
7 9 6
7 6 2
3 6 4
3 4 7
4 6 14
4 5 9
5 6 10
*/