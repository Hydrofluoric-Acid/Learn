#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N],b[N],ans,n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int x;
    map<int,int> ma,mb,mp;
    for(int i=1;i<=n;i++){
        cin>>x;
        ma[x]=i;
    }
    for(int i=1;i<=n;i++){
        cin>>x;
        mb[x]=i;
    }
    for(int i=1;i<=n;i++){
        mp[ma[i]-mb[i]+n]++;
        cout<<ma[i]-mb[i]+n<<endl;
    }
    int ans=0;
    for(auto k:mp){
        ans=max(ans,k.second);
    }
    cout<<ans;
    return 0;
}