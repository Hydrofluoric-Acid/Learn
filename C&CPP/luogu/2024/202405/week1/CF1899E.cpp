#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
int solve(){
    int n,mx=INT_MAX,mxi=-1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<mx){
            mx=a[i];
            mxi=i;
        }
    }
    if(mxi==n)return n-1;
    for(int i=mxi;i<n;i++){
        if(a[i+1]<a[i])return -1;
    }
    return mxi-1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int ans=solve();
        cout<<ans<<endl;
    }
    return 0;
}