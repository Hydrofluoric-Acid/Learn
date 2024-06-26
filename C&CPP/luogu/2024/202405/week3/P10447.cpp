#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int f[1<<20][20];
int weight[20][20];
int n;
int hamilton(){
    memset(f,0x3f,sizeof(f));
    f[1][0]=0;
    for(int i=1;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i>>j&1){
                for(int k=0;k<n;k++){
                    if(((i^(1<<j))>>k)&1){
                        f[i][j]=min(f[i][j],f[i^(1<<j)][k]+weight[k][j]);
                    }
                }
            }
        }
    }
    return f[(1<<n)-1][n-1];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>weight[i][j];
        }
    }
    cout<<hamilton();
    return 0;
}