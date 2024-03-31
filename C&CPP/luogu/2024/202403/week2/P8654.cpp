#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e6 + 10;
using namespace std;
int fa[N];
int find(int x){
    if(fa[x]==x)return x;
    else return fa[x]=find(fa[x]);
}
void merge(int i,int j){
    fa[find(i)]=find(j);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n,t=1,k;
    cin>>m>>n>>k;
    for(int i=1;i<=m*n;i++){
        fa[i]=i;
    }
    for(int i=1;i<=k;i++){
        int a,b;
        cin>>a>>b;
        merge(a,b);
    }
    set<int> s;
    for(int i=1;i<=m*n;i++){
        s.insert(find(i));
    }
    cout<<s.size();
    return 0;
}