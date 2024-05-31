#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N], b[N], n;
bool check(int x) {
  for (int i = 1; i <= n; i++) {
    b[i] = a[i];
  }
  for (int i = 3; i <= n; i++) {
    int g1 = (x - b[i - 1]) / 2 + ((x - b[i - 1]) % 2 != 0), g2 = x - b[i - 2];
    int g = max(g1, g2);
    if (g > b[i])
      return false;
    b[i - 2] +=g*2;
    b[i-1]+=g;
    b[i]-=g*3;
  }
  for(int i=1;i<=n;i++){
    if(b[i]<x)return false;
  }
  return true;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  ll s = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    s += a[i];
  }
  int l = 1, r = s / n + 1;
  while (l < r) {
    int mid = l + r >> 1;
    if(check(mid)){
        l=mid+1;
    }else r=mid;
  }
  cout<<l;
  return 0;
}