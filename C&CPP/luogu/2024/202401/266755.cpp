#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
typedef long long ll;
#define N 100010
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,l,r,t[N],ans=0,lr[N],rr[N];
    cin>>h;
    for(int i=1;i<=h;i++){
        cin>>lr[i]>>rr[i];
    }
    ans=lr[1];
    for(int i=2;i<=h;i++){
        ans=max(ans,rr[i]-lr[i-1]);
    }
    cout<<ans;
    return 0;
}