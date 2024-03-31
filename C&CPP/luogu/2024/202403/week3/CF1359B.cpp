#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        char c;
        vector<vector<int>> v(n+1,vector<int>(m+1));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>c;
                v[i][j]=(c=='.'?0:-1);
            }
        }
        ll ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(v[i][j]==0){
                    v[i][j]=1;
                    if(j+1<=m&&v[i][j+1]==0){
                        v[i][j+1]=1;
                        if(x*2>y)ans+=y;
                        else ans+=2*x;
                    }else{
                        ans+=x;
                    }     
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}