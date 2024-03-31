#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n,ans=0;
        cin>>a>>b>>c>>n;
        while(true){
            a=2*c-a;
            ans++;
            if(max(a,max(b,c))>=n){
                cout<<ans<<endl;
                break;
            }
            b=2*a-b;
            ans++;
            if(max(a,max(b,c))>=n){
                cout<<ans<<endl;
                break;
            }
            c=2*b-c;
            ans++;
            if(max(a,max(b,c))>=n){
                cout<<ans<<endl;
                break;
            }
        }
    }
    return 0;
}