#include <cstdio>
#include <vector>
#include<algorithm>
#include<climits>
typedef long long ll;
using namespace std;
int main()
{
  ll n,k,ans=INT_MAX,c=INT_MAX,d=0;
  scanf("%lld %lld",&n,&k);
  vector<int> a(n+1),b(n+1);
  for(int i=1;i<=n;i++)scanf("%d",&a[i]);
  for(int i=1;i<=n;i++)scanf("%d",&b[i]);
  for(int i=1;i<=min(n,k);i++){
    c=min(c,a[i]+b[i]);
    d+=a[i];
    ans=min(ans,d+(k-i)*c);
  }
  printf("%lld",ans);
  return 0;
}