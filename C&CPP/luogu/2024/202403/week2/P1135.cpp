#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> v(n+1),res(n+1,inf);
    vector<bool> vis(n+1,false);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    queue<int> q;
    res[a]=0;
    q.push(a);
    while(!q.empty()){
        int t=q.front();
        q.pop();
        //cout<<t<<" ";
        if(t==b){
            cout<<res[b];
            return 0;
        }
        int d1=t+v[t],d2=t-v[t];
        if(d1<=n&&!vis[d1]){
            q.push(d1);
            res[d1]=(res[t]+1);
            vis[t]=true;
        }
        if(d2>=1&&!vis[d2]){
            q.push(d2);
            res[d2]=(res[t]+1);
            vis[t]=true;
        }
    }
    cout<<-1;
    return 0;
}