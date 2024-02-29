#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 2e5+10;
using namespace std;
struct{
    int l,r,v;
}tr[N*4];
void pushup(int u){
    tr[u].v=max(tr[u*2].v,tr[u*2+1].v);
}
void build(int u,int l,int r){//节点编号，接下来要构造的区间
    tr[u]={l,r};
    if(l==r)return;
    int mid=l+r>>1;
    build(u<<1,l,mid),build(u<<1|1,mid+1,r);
}
int query(int u,int l,int r){
    if(tr[u].l>=l&&tr[u].r<=r){
        return tr[u].v;
    }
    int mid=tr[u].l+tr[u].r>>1;
    int v=0;
    if(l<=mid)v=query(u<<1,l,r);
    if(r>mid)v=max(v,query(u<<1|1,l,r));
    return v;
}
void modify(int u,int x,int v){
    if(tr[u].l==x&&tr[u].r==x)tr[u].v=v;
    else{
        int mid=tr[u].l+tr[u].r>>1;
        if(x<=mid)modify(u<<1,x,v);
        else modify(u<<1|1,x,v);
        pushup(u);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n=0,last=0;
    int m,p;
    cin>>m>>p;
    build(1,1,m);
    int x;
    char c;
    while(m--){
        cin>>c>>x;
        if(c=='Q'){
            last=query(1,n-x+1,n);
            cout<<last<<endl;
        }else{
            modify(1,n+1,(last+x)%p);
            n++;
        }
    }
    return 0;
}