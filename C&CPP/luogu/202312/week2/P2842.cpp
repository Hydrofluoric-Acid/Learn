#include<bits/stdc++.h>
using namespace std;
int f[10010];
int dfs(int w){
    if(w<0)return 1e9;
    if(f[w]!=-1)return f[w];
    if(w==0)return 0;
    int x=min({dfs(w-1),dfs(w-5),dfs(w-11)})+1;
    f[w]=x;
    return x;
}
int main(){
    memset(f,-1,sizeof(f));
    cout<<dfs(15);
    return 0;
}