/* #include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, V;
    cin >> n >> V;
    vector<int> v(n + 1), w(n + 1), s(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i] >> w[i] >> s[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(V + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= V; j++) {
            dp[i][j] = dp[i - 1][j];
            if (s[i] == -1&&j>=v[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
            } else if (s[i] >= 0) {
                for (int k = 0; k * v[i] <= j; k++) {
                    if (s[i] > 0 && k > s[i])
                        break;
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i] * k] + w[i] * k);
                }
            }
        }
    }
    cout << dp[n][V];
    return 0;
} */
/* #include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
typedef long long ll;
const int N = 10010;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, V;
    vector<int> v(N), w(N), s(N);
    int a, b, c, t = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        if (c == -1) {
            v[t] = a, w[t] = b, s[t] = c;
            t++;
        } else if (c > 0) {
            int k = 1;
            while (c >= k) {
                v[t] = a * k, w[t] = b * k, s[t] = -1;
                c -= k;
                t++;
            }
            if (c) {
                v[t] = c * a, w[t] = c * b, s[t] = -1;
                t++;
            }
        } else if (!c) {
            v[t] = a, w[t] = b, s[t] = 0;
            t++;
        }
    }
    vector<vector<int>> dp(t, vector<int>(V + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= V; j++) {
            dp[i][j] = dp[i - 1][j];
            if (s[i] == 0) {
                for (int k = 0; k * v[i] <= j; k++) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - k * v[i]] + k * w[i]);
                }
            } else if (s[i] == -1 && j >= v[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
            }
        }
    }
    cout << dp[n][V];
    return 0;
} */
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
typedef long long ll;
const int N = 10010;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, V;
    cin>>n>>V;
    vector<int> v(N), w(N), s(N);
    int a, b, c, t = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        if (c == -1) {
            v[t] = a, w[t] = b, s[t] = c;
            t++;
        } else if (c > 0) {
            int k = 1;
            while (c >= k) {
                v[t] = a * k, w[t] = b * k, s[t] = -1;
                c -= k;
                k*=2;
                t++;
            }
            if (c) {
                v[t] = c * a, w[t] = c * b, s[t] = -1;
                t++;
            }
        } else if (!c) {
            v[t] = a, w[t] = b, s[t] = 0;
            t++;
        }
    }
    vector<vector<int>> dp(t, vector<int>(V + 1, 0));
    for (int i = 1; i <t; i++) {
        for (int j = 0; j <= V; j++) {
            dp[i][j] = dp[i - 1][j];
            if (s[i] == 0&&j>=v[i]) {
                dp[i][j]=max(dp[i-1][j],dp[i][j-v[i]]+w[i]);
            } else if (s[i] == -1 && j >= v[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
            }
        }
    }
    cout << dp[t-1][V];
    return 0;
}