#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1005;
using namespace std;
int a[N][N],vis[N][N],dx[4]={-1,0,1,0},dy[4]={0,1,0,-1},h,w;
int dfs(int i,int j){
    int res=0;
    vis[i][j]=1;
    for(int i=0;i<4;i++){
        int tx=i+dx[i],ty=j+dy[i];
        if(tx>=1&&tx<=h&&ty>=1&&ty<=w&&a[tx][ty]==1)return 1;
    }
    for(int i=0;i<4;i++){
        int tx=i+dx[i],ty=j+dy[i];
        if(tx>=1&&tx<=h&&ty>=1&&ty<=w&&a[tx][ty]!=1&&!vis[tx][ty]){
            res+=dfs(tx,ty);
        }
    }
    return res+1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>h>>w;
    string s;
    for(int i=1;i<=h;i++){
        cin>>s;
        for(int j=1;j<=w;j++){
            a[i][j]=(s[j-1]=='#');
        }
    }
    
    int ans=0;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(!a[i][j]){
                memset(vis,0,sizeof(vis));
                ans=max(ans,dfs(i,j));
            }
        }
    }
    cout<<ans;
    return 0;
}