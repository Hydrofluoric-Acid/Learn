#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1005;
using namespace std;
int f[N][N],vis[N][N],n,m;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
/* int dfs(int x,int y){
    vis[x][y]=1;
    int res=f[x][y];
    for(int i=0;i<4;i++){
        int tx=x+dx[i],ty=y+dy[i];
        if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&!vis[tx][ty]&&f[tx][ty]){
            res+=dfs(tx,ty);
        }
    }
    return res;
} */
int dfs(int x,int y){
    vis[x][y]=1;
    int res=f[x][y];
    if(x!=1&&f[x-1][y]&&!vis[x-1][y]){
        res+=dfs(x-1,y);
    }
    if(x!=n&&f[x+1][y]&&!vis[x+1][y]){
        res+=dfs(x+1,y);
    }
    if(y!=1&&f[x][y-1]&&!vis[x][y-1]){
        res+=dfs(x,y-1);
    }
    if(y!=m&&f[x][y+1]&&!vis[x][y+1]){
        res+=dfs(x,y+1);
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>f[i][j];
                vis[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(!vis[i][j]&&f[i][j]){
                    ans=max(ans,dfs(i,j));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}