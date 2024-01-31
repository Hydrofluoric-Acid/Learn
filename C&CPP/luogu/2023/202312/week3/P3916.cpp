#include<bits/stdc++.h>
using namespace std;
int ans=-1;
vector<vector<int>> v;
vector<int> vis;
void dfs(int x){
    if(vis[x])return;
    for(int i=0;i<v[x].size();i++){
        if(vis[v[x][i]])continue;
        ans=max(ans,v[x][i]);
        dfs(v[x][i]);
    }
}
int main(){
    int n,m,x,y;
    cin>>n>>m;
    v.resize(n+1,vector<int>()),vis.resize(n+1,0);
    while(m--){
        cin>>x>>y;
        v[x].push_back(y);
    }
    for(int i=n;i>=1;i--){
        ans=i;
        dfs(i);
        cout<<ans<<" ";
    }
    return 0;
}
/* #include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<int> ans, vis;
void dfs(int x,int d) {
    if (ans[x])
        return;
    ans[x]=d;
    for (int i = 0; i < v[x].size(); i++) {
        dfs(v[x][i],d);
    }
}
int main() {
    int n, m, x, y;
    cin >> n >> m;
    v.resize(n + 1, vector<int>()), ans.resize(n + 1, 0), vis.resize(n + 1, 0);
    while (m--) {
        cin >> x >> y;
        v[y].push_back(x);
    }
    for(int i=n;i>=1;i--){
        dfs(i,i);
    }
    for (int i = 1; i <=n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
} */