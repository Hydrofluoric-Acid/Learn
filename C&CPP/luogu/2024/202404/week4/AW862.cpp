#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e3+5;
using namespace std;
vector<int> g[N];
int color[N],n,m;
bool dfs(int x,int c){
    color[x]=c;
    for(int i=0;i<g[x].size();i++){
        if(color[g[x][i]]==c)return false;
        if(color[g[x][i]]==0&&!dfs(g[x][i],3-c))return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bool f=true;
    for(int i=1;i<=n;i++){
        if(!color[i]&&!dfs(i,1)){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}