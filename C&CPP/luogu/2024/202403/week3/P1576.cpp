#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7,  N = 2010;
const double inf=1000000000.0;
using namespace std;
typedef struct{
    int v;
    double w;
}edge;
vector<edge> g[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        g[x].push_back({y,100.0/(100-z)});
        g[y].push_back({x,100.0/(100-z)});
    }
    int A,B;
    cin>>A>>B;
    vector<bool> tag(n+1,false);
    vector<double> dis(n+1,inf);
    tag[0]=true;
    dis[A]=1.0;
    edge cur={A,1.0};
    while(true){
        for(int i=0;i<g[cur.v].size();i++){
            if(cur.w*g[cur.v][i].w<dis[g[cur.v][i].v]){
                dis[g[cur.v][i].v]=cur.w*g[cur.v][i].w;
            }
        }
        edge nex={0,inf};
        for(int i=1;i<=n;i++){
            if(!tag[i]&&dis[i]<nex.w){
                nex={i,dis[i]};
            }
        }
        if(nex.v==0&&nex.w==inf)break;
        tag[nex.v]=true;
        cur=nex;
    }
    printf("%.8lf",dis[B]*100.0);
    return 0;
}