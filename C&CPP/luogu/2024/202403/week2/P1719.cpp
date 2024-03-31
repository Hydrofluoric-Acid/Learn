#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 130;
using namespace std;
int a[N][N];
int sum(int X1,int Y1,int X2,int Y2){
    return a[X2][Y2]+a[X1-1][Y1-1]-a[X2][Y1-1]-a[X1-1][Y2];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
        }
    }
    /* for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } */
    int ans=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=i;k<=n;k++){
                for(int l=j;l<=n;l++){
                    ans=max(ans,sum(i,j,k,l));
                }
            }
        }
    }
    cout<<ans;
    return 0;
}