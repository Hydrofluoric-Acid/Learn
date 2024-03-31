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
        ll l=1,r=1e18;
        while(l<=r){
            ll mid=l+r>>1;
            ll th;
            if(mid%n){th=mid-mid/n;}
            if(th==k){
                cout<<mid<<endl;
                break;
            }else if(th>k){
                r=mid+1;
            }else l=mid;
        }
    }
    return 0;
}