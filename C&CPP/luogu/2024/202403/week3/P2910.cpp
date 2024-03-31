#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 105,M=1e4+5;
using namespace std;
int n,m,a[M],dis[N][N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>dis[i][j];
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dis[i][j]=min((ll)dis[i][j],(ll)dis[i][k]+dis[k][j]);
            }
        }
    }
    int ans=0;
    for(int i=2;i<=m;i++){
        ans+=dis[a[i-1]][a[i]];
    }
    cout<<ans;
    return 0;
}