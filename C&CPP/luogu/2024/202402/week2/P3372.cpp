#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 10;
using namespace std;
ll a[N],w[N*4],lzy[N*4];
void pushup(const int u){
    w[u]=w[u*2]+w[u*2+1];
}
void build(const int u,int L,int R){
    if(L==R){
        w[u]=a[L];
        return;
    }
    int M=(L+R)/2;
    build(u*2,L,M);
    build(u*2+1,M+1,R);
    pushup(u);
}
bool InRange(int L,int R,int l,int r){
    return (l<=L)&&(R<=r);
}
bool OutofRange(int L,int R,int l,int r){
    return (L>r)||(R<l);
}
void maketag(int u,int len,ll x){
    lzy[u]+=x;
    w[u]+=len*x;
}
void pushdown(int u,int L,int R){
    int M=(L+R)/2;
    maketag(u*2,M-L+1,lzy[u]);
    maketag(u*2+1,R-M,lzy[u]);
    lzy[u]=0;
}
ll query(int u,int L,int R,int l,int r){
    if(InRange(L,R,l,r)){
        return w[u];
    }else if(!OutofRange(L,R,l,r)){
        int M=(L+R)/2;
        pushdown(u,L,R);
        return query(u*2,L,M,l,r)+query(u*2+1,M+1,R,l,r);
    }else{
        return 0;
    }
}
void update(int u,int L,int R,int l,int r,ll x){
    if(InRange(L,R,l,r)){
        maketag(u,R-L+1,x);
    }else if(!OutofRange(L,R,l,r)){
        int M=(L+R)/2;
        pushdown(u,L,R);
        update(u*2,L,M,l,r,x);
        update(u*2+1,M+1,R,l,r,x);
        pushup(u);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    build(1,1,n);
    for(int i=1;i<=m;i++){
        int opt,x,y;
        ll k;
        cin>>opt;
        if(opt==1){
            cin>>x>>y>>k;
            update(1,1,n,x,y,k);
        }else{
            cin>>x>>y;
            cout<<query(1,1,n,x,y)<<endl;
        }
    }
    return 0;
}