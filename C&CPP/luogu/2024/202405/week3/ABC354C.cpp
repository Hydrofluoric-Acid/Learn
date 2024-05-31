#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
struct node{
    int val;
    int pos;
    bool operator<(const node& o)const{
        return val<o.val;
    }
};
int vis[N];
node a[N],b[N];
bool cmp(const node m,const node n){
    return m.val<n.val;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    map<int,int> mp1,mp2;
    for(int i=0;i<n;i++){
        cin>>a[i].val>>b[i].val;
        mp1[a[i].val]=b[i].val;
        mp2[b[i].val]=a[i].val;
        a[i].pos=i;
        b[i].pos=i;
    }
    sort(a,a+n,cmp);
    sort(b,b+n,cmp);
    for(int i=0;i<n;i++){
        int g=lower_bound(b,b+n,node{mp1[a[i].val],0})-b;
        for(int j=0;j<g;j++){
            if(!vis[j]&&a[i].val<b[j].val&&mp2[b[j].val]>a[i].val){
                vis[j]=1;
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(!vis[i])ans++;
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
        if(!vis[i])cout<<a[i].pos+1<<' ';
    }
    return 0;
}