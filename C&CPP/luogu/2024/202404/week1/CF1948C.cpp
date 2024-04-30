#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> v(3,vector<int>(n+1,-1));
        vector<vector<bool>> vis(3,vector<bool>(n+1,false));
        for(int i=1;i<=2;i++){
            for(int j=1;j<=n;j++){
                char c;
                cin>>c;
                if(c=='>')v[i][j]=1;
            }
        }
        queue<pair<int,int>> q;
        q.push({1,1});
        bool f=true;
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            if(p.first==2&&p.second==n){
                f=true;
                break;
            }
            vis[p.first][p.second]=true;
            for(int i=0;i<4;i++){
                int tx=p.first+dx[i],ty=p.second+dy[i];
                if(ty>=1&&ty<=n&&(tx==1||tx==2))ty+=v[tx][p.second+dy[i]];
                if((tx==1||tx==2)&&ty>=1&&ty<=n&&!vis[tx][ty]){
                    q.push({tx,ty});
                }
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}