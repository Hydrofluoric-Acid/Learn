#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[300];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,s,ans=0;
    cin>>n>>k>>s;
    for(int i=0;i<n;i++){
        int t,p;
        cin>>t>>p;
        if(t>=175){
            if(p>=s)ans++;
            else a[t]++;
        }
    }
    for(int i=175;i<=290;i++){
        ans+=min(a[i],k);
    }
    cout<<ans;
    return 0;
}