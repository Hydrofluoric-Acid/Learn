#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int v[5][5]={{0,0,0,0,0},
                {0,1,1,1,1},
                {0,1,1,2,2},
                {0,1,2,8,12},
                {0,1,2,12,16}};
ll solve(int n,int m){
    if(n==1||m==1){
        return 1;
    }else if(n<=4&&m<=4){
        return v[n][m];
    }else if(n==2){
        return 1ll*m/2+1ll*(m%2!=0?1:0);
    }else if(m==2){
        return 1ll*n/2+1ll*(n%2!=0?1:0);
    }else if(n<=4&&m>4){
        return 1ll*v[n][4]+1ll*(m-4)*n;
    }else if(n>4&&m<=4){
        return 1ll*v[4][m]+1ll*(n-4)*m;
    }else if(n>4&&m>4){
        return 1ll*v[4][4]+1ll*n*m-16;
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<solve(n,m)<<endl;
    }
    return 0;
}