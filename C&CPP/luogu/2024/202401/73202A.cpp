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
#define N 200100
typedef long long ll;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T,n,v[N],ans=0;
    cin>>T;
    while(T--){
        int mine=INT_MAX,maxe=INT_MIN;
        cin>>n;
        ll sum=0;
        for(int i=1;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            //mine=min(v[i],mine);
            maxe=max(v[i],maxe);
        }
        cout<<maxe<<endl;
    }
    return 0;
}