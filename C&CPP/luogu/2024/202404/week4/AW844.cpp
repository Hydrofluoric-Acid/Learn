#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e2 + 5;
using namespace std;
int n,m,g[N][N],d[N][N];
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
int bfs(){
    memset(d,-1,sizeof d);
    d[0][0]=0;
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        pair<int,int> t=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int tx=t.first+dx[i],ty=t.second+dy[i];
            if(tx>=0&&tx<n&&ty>=0&&ty<m&&g[tx][ty]==0&&d[tx][ty]==-1){
                d[tx][ty]=d[t.first][t.second]+1;
                q.push({tx,ty});
            }
        }
    }
    return d[n-1][m-1];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>g[i][j];
        }
    }
    cout<<bfs();
    return 0;
}
/* 
5 5
0 1 0 0 0
0 1 0 1 0
0 0 0 0 0
0 1 1 1 0
0 0 0 1 0
 */