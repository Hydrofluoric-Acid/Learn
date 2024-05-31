#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()==1){
            cout<<0<<endl;
            continue;
        }
        sort(a,a+n);
        if(s.size()==2){
            cout<<a[n-1]-a[0]<<endl;
            continue;
        }
        int i=1;
        for(i;i<n;i++){
            if(a[i]!=a[0])break;
        }
        ll ans=a[i]-a[0];
        i=n-1;
        for(i;i>0;i--){
            if(a[i]!=a[n-1])break;
        }
        ans=max(ans,a[n-1]-a[i]);
        cout<<ans+a[n-1]-a[0]<<endl;
    }
    return 0;
}