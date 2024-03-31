#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = INT_MAX, N = 1e5 + 5;
using namespace std;
typedef struct{
    int next,weight;
}edge;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,s;
    cin>>n>>m>>s;
    vector<vector<edge>> g(n+1,vector<edge>());
    vector<ll> dis(n+1,inf);
    vector<bool> tag(n+1,false);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        if(u!=v)g[u].push_back(edge{v,w});
    }
    dis[s]=0,tag[s]=true,tag[0]=true;
    int u=s;//进行操作的下一条边
    queue<edge> q;
    vector<bool> inq(n+1,false);
    q.push(edge{s,0});
    inq[s]=1;
    while(!q.empty()){
        edge e=q.front();
        q.pop();
        int y=e.next,w=e.weight;
        inq[y]=0;
        for(int i=0;i<g[y].size();i++){
            if(dis[y]+g[y][i].weight<dis[g[y][i].next]){
                dis[g[y][i].next]=dis[y]+g[y][i].weight;
                if(!inq[g[y][i].next]){
                    q.push(g[y][i]);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
    return 0;
}