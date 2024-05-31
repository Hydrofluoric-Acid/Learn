#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[32],b[32];
void solve() {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int t, v;
        cin >> t >> v;
        if (t == 1) {
            a[v]++;
            // for (int i = 0; i < 32; i++) {
            //     cout << a[i] << ' ';
            // }
            // cout << endl;
        } else {
            bool f = true;
            for(int i=0;i<32;i++){
                b[i]=a[i];
            }
            for (int i = 0; i <= 29; i++) {
                if ((v >> i) & 1) {
                    if (!b[i]) {
                        f = false;
                        break;
                    }else{
                        b[i]--;
                    }
                }
                b[i+1]+=b[i]/2;
            }
            if (f)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}