#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int n,k,v[2010],w[2010];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>v[i]>>w[i];
    }
    int ans=0;
    for(int i=2000;i>=0;i--){
        int tmp=(1<<20)-1;
        for(int j=1;j<=n;j++){
            if((i&w[j])==i){
                tmp&=v[j];
            }
        }
        if(tmp<=k){
            ans=max(ans,i);
        }
    }
    cout<<ans;
    return 0;
}