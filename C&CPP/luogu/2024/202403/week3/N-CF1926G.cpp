#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
char type[N];
int n;
vector<int> g[N];
int f[N][2]={0};
int F(int x,bool t,int fa=0){
    if(f[x][t])return f[x][t];
    if((t&&type[x]=='P')||(!t&&type[x]=='S'))return 1e9;
    for(auto i:g[x]){
        if(i==fa)continue;
        f[x][t]+=min(F(i,t,x),F(i,!t,x)+1);
    }
    return f[x][t];
}
int main() {
    ios::sync_with_stdio(0);
    
    int t;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        for(int i=2;i<=n;i++){
            int x;
            scanf("%d",&x);
            g[i].push_back(x);
            g[x].push_back(i);
        }
        scanf("%s",type+1);
        memset(f,0,sizeof f);
        int result=min(F(1,false),F(1,true));
        printf("%d\n",result);
        for(int i=1;i<=n;i++){
            g[i].clear();
        }
    }
    return 0;
}