#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int d = 0, mx = INT_MAX, md = INT_MIN;
    cin >> n;
    vector<int> v(n + 1, 0),u(n+1,0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        u[i]=v[i];
        if (!v[i]) {
            mx = min(mx, v[i]), md = max(md, v[i]);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i - 1 >= 1 && v[i] != 0 && v[i - 1] != 0) {
            d += abs(v[i] - v[i - 1]);
        }
        if (i + 1 <= n && v[i] != 0 && v[i + 1] != 0) {
            d += abs(v[i] - v[i + 1]);
        }
    }
    if (d > 1) {
        cout << -1;
        return 0;
    }

    int k, x;
    for (int i = 1; i <= n; i++) {
        if (v[i]) {
            k = i;
            x = v[i];
            break;
        }
    }
    for (int i = k; i >= 1; i--) {
        v[i] = x;
    }
    for (int i = k+1; i <= n; i++) {
        if (v[i]==0) {
            k = i;
            x = v[k - 1];
            break;
        }
    }
    for (int i = k; i <= n; i++) {
        if(!v[i])v[i] = x;
    }
    
    int dd;
    for (int i = 1; i <= n; i++) {
        if (i - 1 >= 1 && v[i] != 0 && v[i - 1] != 0) {
            dd += abs(v[i] - v[i - 1]);
        }
        if (i + 1 <= n && v[i] != 0 && v[i + 1] != 0) {
            dd += abs(v[i] - v[i + 1]);
        }
    }
    if(dd==0){
        int x;
        for(int i=1;i<=n;i++){
            if(!u[i]){
                v[i]=md+1;
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }
   /*  cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<u[i];
    }
    cout << d; */
    return 0;
}