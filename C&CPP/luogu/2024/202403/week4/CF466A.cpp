#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b){
        cout<<n*a;
    }else{
        cout<<(n/m)*b+min(n%m*a,b);
    }    
    /* ll ans=0;
    if(m*a>b&&n>=m){
        ans=n/m*b;
        
    }
    n%=m;
    ans+=min(n*a,b);
    cout<<ans; */
    return 0;
}