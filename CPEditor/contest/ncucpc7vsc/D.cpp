#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
double a[N], b[N];int n;
bool check(double x) {
  for (int i = 1; i <= n; i++) {
    b[i] = a[i];
  }
  for (int i = 3; i <= n; i++) {
    if (b[i - 2] < x) {
      double g = 1.0*(x - b[i - 2]);
      if(b[i]<g/2.0*3.0)return false;   
      b[i - 2] += g;
      b[i - 1] += g / 2;
      b[i] -= g / 2 * 3;
    }
  }
  if(b[n-1]<x&&b[n-1]*3+x<=b[n]){
    double g=x-b[n-1];
    b[n-2]+=2*g;
    b[n-1]+=g;
    b[n]-=3*g;
  }
  // cout << 'g';
  for (int i = 3; i <= n; i++) {
    if (b[i] < x)
      return false;
  }
  return true;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  double l = 1, r = 1e9;
  while (l < r) {
    double mid = (l + r)/2;
    if (check(mid))
      r = mid;
    else
      l = mid + 1;
  }
  cout << l;
  return 0;
}