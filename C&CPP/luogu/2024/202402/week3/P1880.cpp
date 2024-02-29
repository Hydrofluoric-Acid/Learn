/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n*2+1),s(n*2+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v[i+n]=v[i];
    }
    for(int i=1;i<=n*2;i++){
        s[i]=s[i-1]+v[i];
    }
    vector<vector<int>> f(n*2+1,vector<int>(n*2+1,N)),g(n*2+1,vector<int>(n*2+1,-N));
    for(int len=1;len<=n;len++){
        for(int i=1;i+len-1<=n*2;i++){
            int l=i,r=l+len-1;
            if(len==1)f[l][r]=g[l][r]=0;
            else{
                for(int k=l;k<r;k++){
                    f[l][r]=min(f[l][r],f[l][k]+f[k+1][r]+s[r]-s[l-1]);
                    g[l][r]=max(g[l][r],g[l][k]+g[k+1][r]+s[r]-s[l-1]);
                }
            }
        }
    }
    int minv=INT_MAX,maxv=INT_MIN;
    for(int i=1;i<=n;i++){
        minv=min(minv,f[i][i+n-1]);
        maxv=max(maxv,g[i][i+n-1]);
    }
    cout<<minv<<endl<<maxv;
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 210,INF=0x3f3f3f3f;
using namespace std;
int a[N*2],s[N*2],f[N][N],g[N][N];
int dfs1(int l,int r){
    if(f[l][r])return f[l][r];
    if(l==r) return f[l][r]=0;
    int res=INF;
    for(int k=l;k<r;k++){
        res=min(res,dfs1(l,k)+dfs1(k+1,r)+s[r]-s[l-1]);
    }
    return f[l][r]=res;
}
int dfs2(int l,int r){
    if(g[l][r])return g[l][r];
    if(l==r) return g[l][r]=0;
    int res=0;
    for(int k=l;k<r;k++){
        res=max(res,dfs2(l,k)+dfs2(k+1,r)+s[r]-s[l-1]);
    }
    return g[l][r]=res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i+n]=a[i];
    }
    for(int i=1;i<=2*n;i++){
        s[i]=s[i-1]+a[i];
    }
    dfs1(1,2*n),dfs2(1,2*n);
    int minv=INT_MAX,maxv=INT_MIN;
    for(int i=1;i<=n;i++){
        minv=min(minv,f[i][i+n-1]);
        maxv=max(maxv,g[i][i+n-1]);
    }
    cout<<minv<<endl<<maxv;
    return 0;
}