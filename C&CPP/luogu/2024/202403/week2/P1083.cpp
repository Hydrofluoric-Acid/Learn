#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e6 + 5;
using namespace std;
int r[N],d[N],s[N],t[N];
ll c[N];
int n,m;
bool check(int a){
    for(int i=1;i<=n;i++){
        c[i]=r[i]-r[i-1];
    }
    for(int i=1;i<=a;i++){
        c[s[i]]-=d[i];
        c[t[i]+1]+=d[i];
    }
    for(int i=1;i<=n;i++){
        c[i]+=c[i-1];
        if(c[i]<0)return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>r[i];
    }
    
    for(int i=1;i<=m;i++){
        cin>>d[i]>>s[i]>>t[i];
    }
    if(check(m)){
        cout<<0;
        return 0;
    }
    int l=1,r=m;
    while(l<r){
        int mid=l+r>>1;
        if(!check(mid)){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<-1<<endl<<r;
    return 0;
}