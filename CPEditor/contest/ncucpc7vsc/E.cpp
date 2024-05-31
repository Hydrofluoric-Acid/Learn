#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int minv = INT_MAX, pos=0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    if (a[i] < minv) {
      minv = a[i];
      pos = i;
    }
  }
  for (int i = pos; i < n; i++) {
    if(a[i]>a[i+1]){
        cout<<-1;
        return 0;
    }
  }
  cout << pos-1 ;
  return 0;
}