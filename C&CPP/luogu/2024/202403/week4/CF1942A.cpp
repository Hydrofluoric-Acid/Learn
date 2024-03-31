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
        if(n==k){
            for(int i=1;i<=n;i++){
                cout<<1<<" ";
            }
        }else if(k==1){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
        }else cout<<-1;
        cout<<endl;
    }
    return 0;
}