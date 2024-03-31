#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 6005;
using namespace std;
vector<int> g[N];
int n,a[N],f[N][2];//
void dfs(int u,int fa){//当前节点，当前节点父节点
    f[u][0]=0,f[u][1]=a[u];
    for(auto k:g[u]){
        if(k!=fa){
            dfs(k,u);
            f[u][0]+=max(f[k][0],f[k][1]);
            f[u][1]+=f[k][0];
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y),g[y].push_back(x);
    }
    dfs(1,0);
    cout<<max(f[1][0],f[1][1]);
    return 0;
}