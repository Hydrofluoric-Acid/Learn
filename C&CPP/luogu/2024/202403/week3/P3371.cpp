#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = INT_MAX, N = 1e5 + 5;
using namespace std;
typedef struct{
    int y,weight;
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
    while(true){
        for(int i=0;i<g[u].size();i++){
            int y=g[u][i].y,w=g[u][i].weight;
            if(w+dis[u]<dis[y]){
                dis[y]=w+dis[u];
            }
        }
        ll next=0,k=inf;
        for(int i=1;i<=n;i++){
            if(dis[i]!=inf&&!tag[i]&&dis[i]<k){//找下一条能被标记的最短路径
                next=i,k=dis[i];
            }
        }
        if(!next)break;//next未变，即都标记完了，要记得把tag[0]标记为true
        tag[next]=true;
        u=next;
    }
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
    return 0;
}