#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    ll x,a;
    cin>>n>>m>>x;
    vector<vector<int>> v(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++){
        ll t=0;
        for(int j=1;j<=n;j++){
            cin>>v[i][j];
            x-=v[i][j];
            t=t^v[i][j];
        }
        if(i==1)a=t;
        else if(t!=a){
           cout<<"wrong answer";
            return 0; 
        }
    }
    if(x){
        cout<<"wrong answer";
        return 0;
    }
    ll b=0;
    for(int j=1;j<=m;j++){
        ll t=0;
        for(int i=1;i<=n;i++){
            t=t^v[i][j];
        }
        if(j==1)b=t;
        else if(t!=b){
            cout<<"wrong answer";
            return 0;
        }
    }
    cout<<"accepted";
    return 0;
}