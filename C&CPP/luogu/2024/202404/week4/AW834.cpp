#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n,path[N];
bool st[N];
void dfs(int x){
    if(x==n){
        for(int i=0;i<n;i++){
            cout<<path[i]<<" ";
        }
        cout<<endl;
        return 
    for(int i=1;i<=n;i++){
        if(!st[i]){
            path[x]=i;
            st[i]=true;
            dfs(x+1);
            st[i]=false;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    dfs(0);
    return 0;
}