#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (st.empty()||st.top()!=x) {
            st.push(x);
            continue;
        }
        while (!st.empty() && st.top() == x) {
            st.pop();
            x += 1;
            
        }
        st.push(x);
    }
    cout << st.size();
    return 0;
}