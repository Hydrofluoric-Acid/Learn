#include<bits/stdc++.h>
using namespace std;
#define maxn 410
struct coord{
    int x,y;
};
queue<coord> q;
int ans[maxn][maxn],walk[8][2]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
int main(){
    int n,m,sx,sy;
    cin>>n>>m>>sx>>sy;
    memset(ans,-1,sizeof(ans));
    coord tmp={sx,sy};
    q.push(tmp);
    ans[sx][sy]=0;
    while(!q.empty()){
        coord u=q.front();
        q.pop();
        for(int k=0;k<8;k++){
            int x=u.x+walk[k][0],y=u.y+walk[k][1];
            int d=ans[u.x][u.y];
            if(x<1||y<1||x>n||y>m||ans[x][y]!=-1)continue;
            ans[x][y]=d+1;
            coord tmp={x,y};
            q.push(tmp);
        }
    }
    for(int i=1;i<=n;i++,puts("")){
        for(int j=1;j<=m;j++){
            printf("%-5d",ans[i][j]);
        }
    }
    return 0;
}