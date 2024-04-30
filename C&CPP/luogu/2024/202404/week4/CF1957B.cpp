#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<k<<endl;
            continue;
        }
        vector<int> ans(n,0);
        int i=63;
        for(i;i>=0;i--){
            if(k&(1<<i))break;
        }
        ans[0]=(1<<i)-1;
        ans[1]=k-ans[0];
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}