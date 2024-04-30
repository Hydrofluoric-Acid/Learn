#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 1;
using namespace std;
struct edge{
    int v,w;
};
struct node{
    ll dis;
    int v;
    bool operator<(const node& a)const{
        return a.dis<dis;
    }
};
vector<edge> g[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    vector<ll> dis(n+1,LLONG_MAX);
    vector<int> path(n+1,-1);
    vector<bool> vis(n+1,false);
    priority_queue<node> q;
    q.push({0,1});
    dis[1]=0;
    while(!q.empty()){
        int v=q.top().v;
        q.pop();
        if(vis[v])continue;
        vis[v]=true;
        for(auto e:g[v]){
            if(dis[e.v]>dis[v]+e.w){
                dis[e.v]=dis[v]+e.w;
                q.push({dis[e.v],e.v});
                path[e.v]=v;
            }
        }
    }
    if(path[n]==-1)cout<<-1;
    else{
        vector<int> p(n,0);
        int cur=n,cnt=0;
        while(path[cur]!=-1){
            p[cnt++]=path[cur];
            cur=path[cur];
        }
        for(int i=cnt-1;i>=0;i--){
            cout<<p[i]<<' ';
        }
        cout<<n;
    }
    return 0;
}