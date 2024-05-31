#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<ll,int> mp;
        ll s0=0,s1=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i&1)s1+=x;
            else s0+=x;
            if(s0==s1||mp[s0-s1]){
                flag=true;
            }
            mp[s0-s1]=1;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}