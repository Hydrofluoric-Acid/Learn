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
        int n,x;
        cin>>n;
        ll res=0;
        for(int i=0;i<n;i++){
            cin>>x;
            res+=x;
        }
        ll u=(ll)sqrt(res);
        if(u*u==res||(u-1)*(u-1)==res||(u+1)*(u+1)==res){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}