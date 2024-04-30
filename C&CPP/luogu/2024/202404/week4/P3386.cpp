#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 510;
using namespace std;
int g[N][N];
int match[N],re[N];
int n,m;
bool dfs(int x){
    for(int i=1;i<=m;i++){
        if(!re[i]&&g[x][i]){
            re[i]=1;
            if(!match[i]||dfs(match[i])){
                match[i]=x;
                return true;
            }
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int e;
    cin>>n>>m>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        g[a][b]=1;
        
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        memset(re,0,sizeof re);
        if(dfs(i))ans++;
    }
    cout<<ans;
    return 0;
}