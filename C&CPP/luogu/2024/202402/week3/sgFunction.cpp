#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 110,M=10010;
int n,m,s[N],f[M];
using namespace std;
int sg(int x){
    if(f[x]!=-1)return f[x];
    unordered_set<int> u;
    for(int i=0;i<m;i++){
        if(x>=s[i])u.insert(sg(x-s[i]));
    }
    for(int i=0;;i++){
        if(!u.count(i))return f[x]=i;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    cin>>n;
    memset(f,-1,sizeof(f));
    int res=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        res^=sg(x);
    }
    if(res)puts("Yes");
    else puts("NO");
    return 0;
}