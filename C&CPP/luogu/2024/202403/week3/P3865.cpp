#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e6 + 5;
using namespace std;
int Logn[N];
int f[N][25];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Logn[1]=0,Logn[2]=1;
    for(int i=3;i<N;i++){
        Logn[i]=Logn[i/2]+1;
    }
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        f[i][0]=x;
    }
    for(int j=1;j<=25;j++){
        for(int i=1;i+(1<<j)-1<=n;i++){
            f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
        }
    }
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        int s=Logn[y-x+1];
        cout<<max(f[x][s],f[y-(1<<s)+1][s])<<endl;
    }
    return 0;
}