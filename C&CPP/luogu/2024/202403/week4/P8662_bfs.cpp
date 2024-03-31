#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1010;
using namespace std;
char mp[N][N];
int vis[N][N],d[4][2]={{0,1},{0,-1},{1,0},{-1,0}},flag;
void bfs(int x,int y){
    queue<pair<int,int>> q;
    q.push({x,y});
    vis[x][y]=1;
    while(!q.empty()){
        pair<int,int> t=q.front();
        q.pop();
        int tx=t.first,ty=t.second;
        if(mp[tx][ty+1]=='#'&&mp[tx][ty-1]=='#'&&mp[tx+1][ty]=='#'&&mp[tx-1][ty]=='#'){
            flag=1;
        }
        for(int i=0;i<4;i++){
            int nx=tx+d[i][0],ny=ty+d[i][1];
            if(vis[nx][ny]==0&&mp[nx][ny]=='#'){
                vis[nx][ny]=1;
                q.push({nx,ny});
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>mp[i];
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mp[i][j]=='#'&&vis[i][j]==0){
                flag=0;
                bfs(i,j);
                if(!flag)ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}