#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> v[i];
  for (int i = 0; i < n; i++) {
    cout << v[i] << endl;
  }
  priority_queue<int, vector<int>, greater<int>> q;
  for (int i = 1; i <= m; i++) {
    q.push(v[i]);
  }
  for (int i = 3; i <= n; i++) {
    cout << q.top() << endl;
    q.pop();
  }
}