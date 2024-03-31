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
        int n,k,ans=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;){
            if(s[i]=='W')i++;
            else{
                i+=k;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}