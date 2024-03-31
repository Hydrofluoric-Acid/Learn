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
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        sort(v.begin()+1,v.end());
        int k=n/2+(n%2==0?0:1);
        int ans=0;
        for(int i=k;i<=n;i++){
            if(v[i]==v[k])ans++;
            else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}