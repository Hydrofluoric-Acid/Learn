#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 501;
using namespace std;
ll f[N][N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        vector<int> v(n*n),ma(n*n);int m=0;
        for(int i=0;i<n*n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=1;i<=n;i++){
            f[i][1]=f[i-1][1]+c;
            if(i==1)f[i][1]=v[0];
            ma[m++]=f[i][1];
            for(int j=2;j<=n;j++){
                f[i][j]=f[i][j-1]+d;
                ma[m++]=f[i][j];
            }
        }
        sort(ma.begin(),ma.end());
        if(ma==v)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}