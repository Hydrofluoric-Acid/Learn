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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=1,cnt=1;
        for(int i=1;i<n;i++){
            if(v[i]-v[i-1]>k){
                cnt=1;
            }else{
                cnt++;
            }
            ans=max(ans,cnt);
        }
        cout<<n-ans<<endl;
    }
    return 0;
}