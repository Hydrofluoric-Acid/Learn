#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
void solve() {
    memset(a,0,sizeof(a));
    int n;cin >> n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    vector<int> b;
    for(int i=0;i<=n;i++){
        if(!a[i]){
            cout<<i<<endl;
            return;
        }
        if(a[i]==1)b.push_back(i);
        if(b.size()==2){
            cout<<b[1]<<endl;
            return;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}