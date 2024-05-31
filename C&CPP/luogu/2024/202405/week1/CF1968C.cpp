#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 550;
using namespace std;
int a[N],b[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=2;i<=n;i++){
            cin>>a[i];
        }
        b[1]=501;
        for(int i=2;i<=n;i++){
            b[i]=b[i-1]+a[i];
        }
        for(int i=1;i<=n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        /* for(int i=n;i>=2;i--){
            cout<<(b[i]%b[i-1])<<" ";
        }
        cout<<endl; */
    }
    return 0;
}