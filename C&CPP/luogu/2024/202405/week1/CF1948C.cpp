#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[3][N],vis[3][N],dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
bool solve(){
    memset(vis,0,sizeof(vis));
    int n;
    cin>>n;
    char c;
    for(int i=1;i<=2;i++){
        for(int j=1;j<=n;j++){
            cin>>c;
            if(c=='<')a[i][j]=-1;
            else a[i][j]=1;
        }
    }
    queue<pair<int,int>> q;
    q.push({1,1});
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        if(vis[p.first][p.second])continue;
        vis[p.first][p.second]=1;
        for(int i=0;i<4;i++){
            int tx=p.first+dx[i],ty=p.second+dy[i];
            if((tx==1||tx==2)&&ty>=1&&ty<=n&&!vis[tx][ty]){
                if(tx==2&&ty+a[tx][ty]==n)return true;
                q.push({tx,ty+a[tx][ty]});
                //cout<<tx<<" "<<ty<<endl;
            }
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        bool f=solve();
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}