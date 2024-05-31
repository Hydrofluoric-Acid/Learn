/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
struct p1{
    int a,b;
    bool operator<(const p1 p)const{
        return a<p.a;
    }
};
struct p2{
    int a,b;
    bool operator<(const p2 p)const{
        return b<p.b;
    }
};
bool cmp1(p1 x,p1 y){
    return x.a<y.a;
}
bool cmp2(p2 x,p2 y){
    return x.b<y.b;
}
p1 c[N];
p2 d[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>c[i].a>>c[i].b;
            d[i].a=c[i].a;
            d[i].b=c[i].b;
        }
        sort(c,c+n,cmp1);
        sort(d,d+n,cmp2);
        ll ans=0;
        for(int i=0;i<n;i++){
            p2 tmp;
            tmp.a=0,tmp.b=c[i].b;
            int g=upper_bound(d,d+n,tmp)-d;
            for(int j=0;j<g;j++){
                if(d[j].a>c[i].a)ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll res;
int a[N],b[N];
struct q{
    int c,d;
    bool operator<(const q g)const{
        return c<g.c;
    }
}p[N];
void merge(int l,int r){
    if(l>=r)return;
    int mid=l+r>>1;
    merge(l,mid);
    merge(mid+1,r);

    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }else b[k++]=a[j++],res+=mid-i+1;
    }
    while(i<=mid)b[k++]=a[i++];
    while(j<=r)b[k++]=a[j++];
    for(int i=l;i<=r;i++)a[i]=b[i];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>p[i].c>>p[i].d;
        }
        sort(p,p+n);
        for(int i=0;i<n;i++){
            a[i]=p[i].d;
        }
        res=0;
        merge(0,n-1);
        cout<<res<<endl;
    }
    return 0;
}