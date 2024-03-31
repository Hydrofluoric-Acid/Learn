/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 12;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m=0;
        cin>>n;
        char c;
        vector<vector<int>> v(n+1,vector<int>(n+1,0));
        vector<int> g(n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>c;
                v[i][j]=c-'0';
                //cout<<v[i][j]<<" ";
                g[i]+=v[i][j];
            }
            //cout<<endl;
        }
        bool f=false;
        for(int i=1;i<n;i++){
            if(g[i]&&g[i+1]&&g[i]==g[i+1]){
                f=true;
                break;
            }
        }
        if(f)cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 12;
using namespace std;
int v[N][N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        memset(v,0,sizeof v);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>c;
                v[i][j]=c-'0';
            }
        }
        bool f=false;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(v[i][j]&&!v[i][j-1]&&!v[i][j+1]){
                    f=true;
                    break;
                }
            }
            if(f)break;
        }
        if(f)cout<<"TRIANGLE"<<endl;
        else cout<<"SQUARE"<<endl;
    }
    return 0;
}