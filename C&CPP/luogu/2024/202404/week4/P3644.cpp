#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n;
vector<int> g[N];
int in[N];
void toposort(){
    vector<int> L;
    queue<int> S;
    for(int i=1;i<=n;i++){
        if(in[i]==0)S.push(i);
    }
    while(!S.empty()){
        int u=S.front();
        S.pop();
        L.push_back(u);
        for(auto i:g[u]){
            if(--in[i]==0){
                S.push(i);
            }
        }
    }
    for(int i=0;i<L.size();i++){
        cout<<L[i]<<" ";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        while(true){
            cin>>x;
            if(x==0)break;
            g[i].push_back(x);
            in[x]++;
        }
    }
    toposort();
    return 0;
}