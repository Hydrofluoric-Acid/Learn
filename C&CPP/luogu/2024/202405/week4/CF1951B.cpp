#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N];
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int p1=1;
    while(a[p1]<=a[k]&&p1<=n)p1++;
    if(k<p1){
        cout<<p1-2<<endl;
        return;
    }else{
        int p2=p1;
        while(a[p2+1]<a[k])p2++;
        if(p1!=1)p2++;
        p2-=p1;
        cout<<max(p2,max(p1-2,0))<<endl;
    }
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