#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n,m;
vector<int> g[N];
int in[N];
bool toposort(){
    vector<int> L;
    queue<int> S;
    for(int i=1;i<=n;i++){
        if(!in[i])S.push(i);
    }
    while(!S.empty()){
        int u=S.front();
        S.pop();
        L.push_back(u);
        for(auto v:g[u]){
            if(--in[v]==0){
                S.push(v);
            }
        }
    }
    if(L.size()==n){
            for(auto i:L){
                cout<<i<<" ";
            }
            return true;
        }else{
            return false;
        }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        in[v]++;
    }
    toposort();
    return 0;
}
/* 
3 3
1 2
2 3
1 3
 */