#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[3][N];
void solve(){
    int n;cin>>n;
    for(int i=1;i<=2;i++){
        for(int j=1;j<=n;j++){
            char c;cin>>c;
            a[i][j]=(c-'0');
        }
    }
    int md=n,mx=1;
    for(int i=n;i>=2;i--){
        if(a[1][i]&&!a[2][i-1])md=i-1;
    }
    for(int i=1;i<md;i++){
        if(a[2][i]&&!a[1][i+1])mx=i+1;
    }
    for(int i=1;i<=md;i++)cout<<a[1][i];
    for(int i=md;i<=n;i++)cout<<a[2][i];
    cout<<endl<<md-mx+1<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}