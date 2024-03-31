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
    vector<int> v(n+m+2);
    ll res=0;
    for(int i=1;i<=n+m+1;i++){
        cin>>v[i];
    }
    sort(v.begin()+1,v.end(),greater<int>());
    for(int i=n+2;i<=n+m+1;i++){
        v[i]*=-1;
    }

    for(int i=1;i<=n+m+1;i++){
        res+=v[i];
    }
    cout<<res;
    return 0;
}
