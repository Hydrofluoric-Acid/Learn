#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
ll a[33]={1};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;i<33;i++){
        a[i]=a[i-1]*2;
    }
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int i=0;
        while(true){
            int tmp=(n+1)/2;
            if(k<=tmp)break;
            k-=tmp;
            i++;
            n=n-(n+1)/2;
        }
        //cout<<k<<endl;
        ll ans=a[i];
        for(int j=1;j<k;j++){
            ans+=a[i+1];
        }
        cout<<ans<<endl;
    }
    return 0;
}