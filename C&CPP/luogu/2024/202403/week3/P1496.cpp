#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e4 + 5;
using namespace std;
int n,a[N],b[N],f[N*2],dtop,ctop,d[N*2];
ll c[N*2],ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    set<int> s;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        d[++dtop]=a[i],d[++dtop]=b[i];
    }
    sort(d+1,d+1+dtop);
    for(int i=1;i<1+dtop;i++){
        if(d[i]!=d[i+1]||i==1){
            c[++ctop]=d[i];
        }
    }
    for(int i=1;i<=n;i++){
        int x=lower_bound(c+1,c+ctop+1,a[i])-c;
        int y=lower_bound(c+1,c+ctop+1,b[i])-c;
        for(int j=x;j<y;j++){
            f[j]=1;
        }
    }
    for(int i=1;i<ctop;i++){
        if(f[i])ans+=c[i+1]-c[i];
    }
    cout<<ans;
    return 0;
}