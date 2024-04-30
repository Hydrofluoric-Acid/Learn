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
        int n;
        cin>>n;
        vector<int> v(n);
        ll s=0,g=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s+=v[i];
        }
        s/=n;
        bool f=true;
        for(int i=n-1;i>=0;i--){
            g+=v[i];
            if(g>(n-i)*s){
                f=false;
                break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}