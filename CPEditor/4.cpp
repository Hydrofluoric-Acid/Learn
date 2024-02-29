#include <iostream>
#include <vector>
using namespace std;

const int mod = 1000000009;

int calculate_max_value(vector<pair<int, int>>& peach) {
    int n = peach.size();
    vector<int> dp1(n + 1, 0);
    vector<int> dp2(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        dp1[i] = max((1LL * dp1[i - 1] * peach[i - 1].first) % mod, (1LL * dp2[i - 1] * peach[i - 1].second) % mod);
        dp2[i] = max((1LL * dp1[i - 1] * peach[i - 1].second) % mod, (1LL * dp2[i - 1] * peach[i - 1].first) % mod);
    }

    return max(dp1[n], dp2[n]);
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> peach(n);
    for (int i = 0; i < n; i++) {
        cin >> peach[i].first;
    }
    for (int i = 0; i < n; i++) {
        cin >> peach[i].second;
    }
    int result = calculate_max_value(peach);
    cout << result << endl;

    return 0;
}
