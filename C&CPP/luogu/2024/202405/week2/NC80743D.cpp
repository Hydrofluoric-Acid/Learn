#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
vector<int> g[N];
ll ans=0;
int dfs(int x){
    int son=0;
    for(auto i:g[x]){
        int tmp=dfs(i);
        if(tmp%2==0){
            ans++;
            continue;
        }
        son+=tmp;
    }
    return son+1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        if(u>v)swap(u,v);
        g[u].push_back(v);
    }
    if(n&1){
        cout<<-1;
        return 0;
    }
    dfs(1);
    cout<<ans;
    return 0;
}