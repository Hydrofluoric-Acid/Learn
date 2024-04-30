#include <bits/stdc++.h>
#define endl "\n"
#define lowbit(x) ((x)&-(x))
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int tree[N];
void update(int x,int d){//修改元素a[x],a[x]+=d;
    while(x<=N){
        tree[x]+=d;
        x+=lowbit(x);
    }
}
int sum(int x){//查询前缀和，返回sum=a[1]+...+a[x]
    int ans=0;
    while(x){
        ans+=tree[x];
        x-=lowbit(x);
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        update(i,x);
    }
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        cout<<sum(x)-sum(x-1)<<endl;
    }
    return 0;
}
//Binary Indexed Tree
//用于区间修改+单点查询，差分数组