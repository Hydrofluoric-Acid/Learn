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
#define N 10010
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,ans;
    cin>>n;
    vector<int> v(n+1);
    cerr << v.size()<< endl;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(i==1)ans=__gcd(v[i],v[i]);
        else ans=__gcd(ans,v[i]);
    }
    cout<<abs(ans);
    return 0;
}