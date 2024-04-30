#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 5010,M=2e5+10;
using namespace std;
struct edge{
    int to,w;
    edge(int a,int b){
        to=a,w=b;
    }
};
vector<edge> g[M];
struct node{
    int id,dis;
    node(int a,int b){
        id=a,dis=b;
    }
    bool operator<(const node &u)const{
        return u.dis<dis;
    }
};
int n,m;
bool vis[N];
void prim(){
    int s=1;
    for(int i=1;i<=N;i++){
        vis[i]=false;
    }
    priority_queue<node> q;
    q.push(node(s,0));
    int ans=0,cnt=0;
    while(!q.empty()){
        node u=q.top();
        q.pop();
        if(vis[u.id])continue;
        vis[u.id]=true;
        ans+=u.dis;
        cnt++;
        for(int i=0;i<g[u.id].size();i++){
            edge y=g[u.id][i];
            if(vis[y.to])continue;
            q.push(node(y.to,y.w));
        }
    }
    if(cnt==n)cout<<ans;
    else cout<<"orz";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        g[a].push_back(edge(b,w));
        g[b].push_back(edge(a,w));
    }
    prim();
    return 0;
}