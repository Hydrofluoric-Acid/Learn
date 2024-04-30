#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
ll C(int n){
    if(n==2)return 1;
    if(n&1){
        return 1ll*(n-1)/2*n;
    }else return 1ll*n/2*(n-1);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mp[x-i]++;
        }
        ll res=0;
        for(auto k:mp){
            if(k.second>=2)res+=C(k.second);
        }
        cout<<res<<endl;
    }
    return 0;
}