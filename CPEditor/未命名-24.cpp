#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 55;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> a(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int ans=3;
        for(int i=1;i<=n;i++){
            if(a[a[i]]==i){
                ans=2;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}