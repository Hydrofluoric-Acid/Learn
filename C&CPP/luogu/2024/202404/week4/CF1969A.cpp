#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 55;
using namespace std;
int v[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int ans=3;
        for(int i=1;i<=n;i++){
            if(v[v[i]]==i){
                ans=2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}