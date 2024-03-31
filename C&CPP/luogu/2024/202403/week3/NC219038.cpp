#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,h;
    cin>>t;
    while(t--){
        int ans=0,k=1;
        cin>>h;
        while(h){
            h-=k;
            ans++;
            if(h%(k*2)==0)k*=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}