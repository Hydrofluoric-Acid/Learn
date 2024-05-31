#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e3 + 5;
using namespace std;
int n,T,h[N],l[N],x1,x2;
inline bool check(){
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<a[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    // cout<<"--------------------"<<endl;
    // for(int i=1;i<=n;i++){
    //     if(!h[i])continue;
    //     bool f1=true;
    //     for(int j=1;j<=n;j++){
    //         if(!a[i][j]){
    //             f1=false;
    //         }
            
    //     }
    //     if(f1)return true;
    // }
    // for(int i=1;i<=n;i++){
    //     if(!l[i])continue;
    //     bool f1=true;
    //     for(int j=1;j<=n;j++){
    //         if(!a[j][i]){
    //             f1=false;
    //         }
            
    //     }
    //     if(f1)return true;
    // }
    if(x1==n||x2==n)return true;
    for(int i=1;i<=n;i++){
        if(h[i]==n||l[i]==n)return true;
    }
    return false;
}
void solve(){
    cin>>n>>T;
    int x;
    for(int i=0;i<T;i++){
        cin>>x;
        int hang=x/n+(x%n!=0),lie=(x%n==0?n:x%n);
        h[hang]++;
        l[lie]++;
        if(hang==lie)x1++;
        if(hang+lie==n+1)x2++;
        if(check()){
            cout<<i+1;
            return;
        }
    }
    cout<<-1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}