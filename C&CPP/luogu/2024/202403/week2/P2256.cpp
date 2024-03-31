#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e4 + 5;
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
    int n,m;
    cin>>n>>m;
    map<string,int> mp;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        mp[s]=i;
        fa[i]=i;
    }
    for(int i=1;i<=m;i++){
        string a,b;
        cin>>a>>b;
        merge(mp[a],mp[b]);
    }
    int k;
    cin>>k;
    while(k--){
        string a,b;
        cin>>a>>b;
        if(find(mp[a])==find(mp[b]))cout<<"Yes."<<endl;
        else cout<<"No."<<endl;
    }
    return 0;
}