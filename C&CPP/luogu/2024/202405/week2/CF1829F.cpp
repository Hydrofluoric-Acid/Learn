/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 210;
using namespace std;
vector<int> g[N];
int vis[N], h[N];
int dfs(int x) {
    int th=0;
    vis[x]=1;
    for(int i=0;i<g[x].size();i++){
        if(!vis[g[x][i]]){
            th=max(th,dfs(g[x][i]));
        }
    }
    return th+1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<N;i++){
            g[i].resize(0);
        }
        memset(vis,0,sizeof(vis));
        memset(h,0,sizeof(h));
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            memset(vis,0,sizeof(vis));
            if(!h[i])h[i]=dfs(i);
            //cout<<h[i]<<" ";
        }
        for(int i=1;i<=n;i++){
            if(h[i]==3){
                cout<<g[i].size()<<" "<<g[g[i][0]].size()-1<<endl;
                //break;
            }
        }
    }
    
    return 0;//耗时一小时多，dfs求各节点作为根节点的高度，高度为3的就是中心点，即可得到答案
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 220;
using namespace std;
vector<int> g[N];
int d[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        memset(d,0,sizeof(d));
        for(int i=0;i<N;i++){
            g[i].resize(0);
        }
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
            d[u]++,d[v]++;
        }
        set<int> s;
        int tmp=0;
        for(int i=1;i<=n;i++){
            if(d[i]==1){
                tmp++;
                s.insert(g[i][0]);
            }
        }
        //cout<<s.size()<<endl;
        cout<<s.size()<<" "<<(tmp/(s.size()))<<endl;
    }
    return 0;
}