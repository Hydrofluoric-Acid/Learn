#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e6 + 5,M=2e6+5;
using namespace std;
int head[N],cnt;
struct{
    int from,to,next;
    int w;
}edge[M];
void init(){
    for(int i=0;i<N;i++)head[i]=-1;
    for(int i=0;i<M;i++)edge[i].next=-1;
}
void addedge(int u,int v,int w){
    edge[cnt].from=u;
    edge[cnt].to=v;
    edge[cnt].w=w;
    edge[cnt].next=head[u];
    head[u]=cnt++;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    init();
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        addedge(u,v,w);
    }
    for(int i=0;i<=n;i++){
        printf("h[%d]=%d\n",i,head[i]);
    }
    for(int i=0;i<m;i++){
        printf("e[%d].to=%d e[%d].next=%d\n",i,edge[i].to,i,edge[i].next);
    }
    return 0;
}