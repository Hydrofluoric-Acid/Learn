#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N];
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  int len = s.length();
//   if(len==1){
//       if(a[1]<5)cout<<a[1];
//       else cout<<10;
//       return 0;
//   }
  string ans='0'+s;
  for(int i=1;i<=len;i++){
      a[i]=s[i-1]-'0';
  }
  for(int i=len;i>=1;i--){
      if(a[i]>=5){
          a[i]=0;
          a[i-1]++;
      }else{
          if(i!=1)a[i]=0;
      }
  }
  int i=1;
  if(a[0])i=0;
  for(i;i<=len;i++){
      cout<<a[i];
  }
//   string ans = '0' + s;
//   s = '0' + s;
//   for (int i = len; i >= 1; i--) {
//     if (a[i]) {
//       if (s[i] == 9)
//         a[i - 1]++;
//       else
//         s[i] = s[i] + 1;
//     }
//     if (s[i] >= '5') {
//       s[i] = 0;
//       a[i - 1]++;
//     } else {
//       if (i != 1)
//         s[i] = '0';
//     }
//     if (s > ans)
//       ans = s;
//   }
//   cout << s;
//   cout << ans;
  return 0;
}