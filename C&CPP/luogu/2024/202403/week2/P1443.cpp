#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 410;
using namespace std;
typedef struct{
    int x,y;
}point;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> v(N,vector<int>(N,inf));
    int n,m,x,y,d[8][2]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
    cin>>n>>m>>x>>y;
    v[x][y]=0;
    queue<point> q;
    q.push({x,y});
    while(!q.empty()){
        point t=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int dx=t.x+d[i][0],dy=t.y+d[i][1];
            if(dx>0&&dy>0&&dx<=n&&dy<=m&&v[dx][dy]==inf){
                q.push({dx,dy});
                v[dx][dy]=min(v[dx][dy],v[t.x][t.y]+1);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(v[i][j]==inf)v[i][j]=-1;
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}