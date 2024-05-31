#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N],b[N];
void solve() {
    int n,mina=INT_MAX,maxa=INT_MIN,cnt=0,x=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mina=min(mina,a[i]);
        maxa=max(maxa,a[i]);
    }
    while(maxa!=mina){
        if(mina&1)x=1;
        else x=0;
        b[++cnt]=x;
        maxa=(maxa+x)/2;
        mina=(mina+x)/2;
    }
    cout<<cnt<<endl;
    if(cnt<=n&&n!=1){
        for(int i=1;i<=cnt;i++){
            cout<<b[i]<<' ';
        }
        cout<<endl;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}