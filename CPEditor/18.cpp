#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9+7;
const int N = 1e5 + 5;
using namespace std;
typedef vector<vector<ll>> matrix;
matrix multiple(matrix a, matrix b) {
    int n = a.size();
    matrix res(n , vector<ll>(n , 0));
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            for (int k = 1; k < n; k++) {
                res[i][j] += a[i][k] * b[k][j]%mod;
                res[i][j]%=mod;
            }
        }
    }
    return res;
}
matrix fastpow(matrix a, ll b) {
    int n = a.size();
    matrix res(n , vector<ll>(n , 0));
    for (int i = 1; i < n; i++) {
        res[i][i] = 1;
    }
    while (b) {
        if (b & 1) {
            res = multiple(res, a);
        }
        a = multiple(a, a);
        b >>= 1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k;
    cin >> n >> k;
    matrix a(n + 1, vector<ll>(n + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    matrix res = fastpow(a, k);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}