#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 5005,M=2e5+1;
using namespace std;
struct e{
    int u,v,w;
}edge[M];
bool cmp(e a,e b){
    return a.w<b.w;
}
int s[N];
int find(int x){
    if(x!=s[x]){
        s[x]=find(s[x]);
    }
    return s[x];
}
int n,m;
void kruskal(){
    sort(edge+1,edge+m+1,cmp);
    for(int i=1;i<=n;i++)s[i]=i;
    int ans=0,cnt=0;
    for(int i=1;i<=m;i++){
        if(cnt==n-1)break;
        int e1=find(edge[i].u);
        int e2=find(edge[i].v);
        if(e1==e2)continue;
        else{
            ans+=edge[i].w;
            s[e1]=e2;
            cnt++;
        }
    }
    if(cnt==n-1)cout<<ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>edge[i].u>>edge[i].v>>edge[i].w;
    }
    kruskal();
    return 0;
}