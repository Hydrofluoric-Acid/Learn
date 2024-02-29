#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int n;
vector<int> v[N];
vector<char> s;
bool dfs(int u,int fa){
    char ch=s[u],c;
    if(ch=='d')c='p';
    else c='d';
    for(auto e:v[u]){
        if(e==fa)continue;
        if(s[e]=='?')s[e]=c;
        else if(s[e]==ch)return false;
        if(!dfs(e,u))return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    s.resize(n+1);
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int t=0;
    for(int i=1;i<=n;i++){
        if(s[i]!='?'){
            t=i;
            break;
        }
    }
    if(t==0){
        t=1;
        s[1]='d';
    }
    return 0;
}