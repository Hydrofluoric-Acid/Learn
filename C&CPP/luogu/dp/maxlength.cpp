#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    vector<vector<int>> dp(s.length() + 1, vector<int>(t.length() + 1, 0));
    // dp[i][j]为s[0...i-1],t[0...j-1]最长公共子串
    for (int j = 0; j < t.length(); j++) {
        if (s[0] == t[j]) {
            dp[1][j + 1] = 1;
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t[0]) {
            dp[i + 1][1] = 1;
        }
    }
    int ans = 0;
    for (int i = 1; i <= s.length(); i++) {
        for (int j = 1; j <= t.length(); j++) {
            if (s[i] == t[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
        }
    }
    for (int i = 0; i <= s.length(); i++) {
        for (int j = 0; j <= t.length(); j++) {
            ans = max(ans, dp[i][j]);
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << ans;
    return 0;
}