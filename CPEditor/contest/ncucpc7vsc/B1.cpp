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
  if(len==1){
    int g=stoi(s);
    if(g>=5)cout<<10;
    else cout<<g;
  }
  s = '0' + s;
  // cout << s << endl;
  string ans = "";
  for(int i=0;i<=len;i++)ans+='0';
  for (int i = len; i > 1; i--) {

    if (s[i] >= '5') {
      s[i] = '0';
      a[i - 1]++;
    } else {
      s[i] = '0';
    }
    
    if (a[i-1]) {
      if (s[i -1] == '9') {
        a[i - 2]++;
        s[i-1] = '0';
      } else
        s[i -1]++;
    }
    ans = max(ans, s);
    //cout<<s<<' '<<ans<<endl;
  }
  //   if (a[1]) {
  //     if (s[1] == '9') {
  //       s[0] = '1';
  //       s[1] = '0';
  //     } else
  //       s[1]=s[1]+1;
  //   }
  if (a[0]) {
    s[0] = '1';
    ans = max(ans, s);
  }

  int i = 0;
  while (ans[i] == '0')
    i++;
  for (i; i < ans.length(); i++) {
    cout << ans[i];
  }
  // cout << ans;
//   cout << endl << s << endl;
//   for (int i = 0; i <= len; i++) {
//     cout << a[i] << ' ';
//   }
  return 0;
}