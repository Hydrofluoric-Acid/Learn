#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N],b[N];
void solve(){
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i*2+1<n;i++){
        b[cnt++]=a[i];
        b[cnt++]=a[n-i-1];
    }
    if(n&1)b[cnt++]=a[n/2];
    for(int i=cnt-1;i>=0;i--){
        cout<<b[i]<<' ';
    }
    cout<<endl;
    /* vector<int> c;
    for(int i=cnt-1;i>=1;i--){
        cout<<abs(b[i]-b[i-1])<<' ';
        c.push_back(abs(b[i]-b[i-1]));
    }
    cout<<endl<<c.size();
    for(int i=0;i<c.size()-1;i++){
        if(c[i]>c[i+1])cout<<i<<endl;
    }
    cout<<endl; */
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