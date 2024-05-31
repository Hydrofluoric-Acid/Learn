#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[33];
void solve(){
    int x;
    cin>>x;
    for(int i=0;i<32;i++){
        a[i]=((x>>i)&1);
    }
    for(int i=0;i<31;i++){
        if(a[i]&&a[i]==a[i+1]){
            a[i]=-1;
            a[i+1]++;
        }
        if(a[i]==2){
            a[i]=0;
            a[i+1]++;
        }
    }
    int j=31;
    for(j;j>=0;j--){
        if(a[j])break;
    }
    cout<<j+1<<endl;
    for(int i=0;i<=j;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}