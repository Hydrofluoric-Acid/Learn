#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e3 + 5;
using namespace std;
int n,m,ans=N;
vector<int> g[N];
bool st[N];
int dfs(int x){
    st[x]=true;
    int sum=1,res=0;
    for(int i=0;i<g[x].size();i++){
        if(!st[g[x][i]]){
            int s=dfs(g[x][i]);
            res=max(res,s);
            sum+=s;
        }
    }
    res=max(res,n-sum);
    ans=min(ans,res);
    return sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    cout<<ans<<endl;
    return 0;
}
/*
9
1 2
1 7
1 4
2 8
2 5
4 3
3 9
4 6 
*/