---
typora-root-url: ./assets
typora-copy-images-to: ./assets
---

[1.召唤神坤【算法赛】 - 蓝桥云课 (lanqiao.cn)](https://www.lanqiao.cn/problems/12117/learning/?contest_id=160)

<img src="/image-20240125213007820.png" alt="image-20240125213007820" style="zoom:80%;" />

```c++
#include <cstdio>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
int main()
{
  int n;
  ll ans=-1;
  scanf("%d",&n);
  vector<int> v(n),pre(n,0),suf(n,0);
  for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  pre[0]=v[0],suf[n-1]=v[n-1];
  for(int i=1;i<n;i++){
    pre[i]=max(v[i],pre[i-1]);
  }
  for(int i=n-2;i>=0;i--){
    suf[i]=max(suf[i+1],v[i]);
  }
  for(int i=1;i<n-1;i++){
    ans=max(ans,((ll)(pre[i-1]+suf[i+1]))/v[i]);
  }
  printf("%lld",ans);
  return 0;
}
```

思路分析：

1、暴力解法，时间复杂度O(n^3)

2、看题解，遍历v[j]即可，未完全理解题目导致开始直接认为v[i-1]和v[n]分别为前后最大值

3、知识点pre和suf数组分别表示[0...i-1],[i+1..n]最大值

[3.怪兽突击【算法赛】 - 蓝桥云课 (lanqiao.cn)](https://www.lanqiao.cn/problems/12116/learning/?contest_id=160)

<img src="/image-20240125213838077.png" alt="image-20240125213838077" style="zoom:80%;" />

思路分析：

1、理解题意不全，误认为在其他时候不能击败已经打过的

2、看题解，贪心，卡在给long long 类型变量赋值INT_MAX

```c++
#include <cstdio>
#include <vector>
#include <algorithm>
#include <climits>
#include<iostream>
typedef long long ll;
using namespace std;
int main() {
    ll n, k, ans = LLONG_MAX, c = LLONG_MAX, d = 0;//值由INT_MAX改为LLONG_MAX后通过
    scanf("%lld %lld", &n, &k);
    vector<ll> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
    for (int i = 1; i <= n; i++)
        scanf("%lld", &b[i]);
    for (int i = 1; i <= min(n, k); i++) {
        c = min(c,a[i] + b[i] );
        d += a[i];
        ans = min(ans, d + (k - i) * c);
    }
    cout<<ans;
    return 0;
}
```

