#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n,m;
vector<int> g[N];
int dis[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(dis,-1,sizeof dis);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q;
    q.push(1);
    dis[1]=0;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        for(int i=0;i<g[t].size();i++){
            if(dis[g[t][i]]==-1){
                dis[g[t][i]]=dis[t]+1;
                q.push(t);
            }
        }
    }
    cout<<dis[n];
    return 0;
}
/* 
4 5
1 2
2 3
3 4
1 3
1 4
 */