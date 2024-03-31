#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e3 + 5;
using namespace std;
int n,m,dis[N][N],mp[N][N];
bool st[N][N];
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
bool bfs(){
    queue<pair<int,int>> q;
    q.push({1,1});
    dis[1][1]=0;
    while(!q.empty()){
        pair<int,int> t=q.front();
        q.pop();
        if(t.first==n&&t.second==m)return true;
        for(int i=0;i<4;i++){
            int tx=t.first+dx[i],ty=t.second+dy[i];
            if(tx&&ty&&tx<=n&&ty<=m&&mp[tx][ty]!=mp[t.first][t.second]&&!st[tx][ty]){
                q.push({tx,ty});
                st[tx][ty]=1;
                dis[tx][ty]=dis[t.first][t.second]+1;
            }
        }
        return false;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char c;
            cin>>c;
            mp[i][j]=c-'a';
        }
    }
    if(bfs())cout<<dis[n][m];
    else cout<<-1;
    return 0;
}