#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    if((n-k+1)>0&&(n-k+1)%2==1){
        cout<<"YES"<<endl;
        for(int i=1;i<k;i++){
            cout<<1<<' ';
        }
        cout<<n-k+1<<endl;
        return;
    }
    if(n-2*k+2>0&&(n-2*k+2)%2==0){
        cout<<"YES"<<endl;
        for(int i=1;i<k;i++){
            cout<<2<<' ';
        }
        cout<<n-2*k+2<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}