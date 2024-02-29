#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
string s1, s2;
void change(int i) {
    char c[2] = {'*', 'o'};
    int a, b;
    a = s1[i] == '*' ? 0 : 1, b = s1[i + 1] == '*' ? 0 : 1;
    s1[i] = c[(a + 1) % 2], s1[i + 1] = c[(b + 1) % 2];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s1 >> s2;
    int len = s1.length(), ans = 0;
    int p = 0, q = 0;
    while (p < len && q < len) {
        if (s1[p] != s2[q]) {
            change(p);
            ans++;
        }
        p++, q++;
    }
    cout << ans;
    return 0;
}