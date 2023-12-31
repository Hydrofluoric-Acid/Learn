#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ans = -1, tmp;
    cin >> n;
    vector<vector<int>> v(n + 1, vector<int>(n + 1, 0)), sum(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> v[i][j];
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + v[i][j];
            ans = max(ans, sum[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << ans;
    return 0;
}