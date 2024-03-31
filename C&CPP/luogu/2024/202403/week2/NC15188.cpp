#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> n1(n+1),m1(m+1);
    vector<ll> ans(n+m+1,0);
    for(int i=0;i<=n;i++){
        cin>>n1[i];
    }
    for(int i=0;i<=m;i++){
        cin>>m1[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            ans[i+j]+=n1[i]*m1[j];
        }
    }
    for(int i=0;i<n+m+1;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}