#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 998244353 ,inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        int g=a[1]-a[0];
        for(int i=2;i<n;i++)g=__gcd(g,a[i]-a[i-1]);
        ll ans=0;
        if(g==0)g=1;
        for(int i=0;i<n;i++){
            ans+=(a[n-1]-a[i])/g;
        }
        int i=1;
        while(mp[a[n-1]-i*g])i++;
        ans+=i;
        cout<<ans<<endl;
    }
    return 0;
}