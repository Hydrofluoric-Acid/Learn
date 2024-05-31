#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
vector<int> g[N];
int a[N];
int fat[N];
int fa[N];
set<int> st[N];
void dfs(int x,int pr){
    fa[x]=pr;
    for(auto i:g[x]){
        if(i==pr)continue;
        dfs(i,x);
    }
}
int f(int x){
    return fa[x]==x?x:fa[x]=f(fa[x]);
}
void uni(int x,int y){
    int p=f(x),q=f(y);
    if(p!=q){
        if(st[p].size()<st[q].size()){
            fa[p]=q;
            for(auto i:st[q]){
                st[p].insert(i);
    
            }
            st[p].clear();
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=2;i<=n;i+=){
        if(s[i]!='R'){

        }
    }
    return 0;
}