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
const int N=1e5+10;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q,l,r;
    int v[N];
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    while(q--){
        cin>>l>>r;
        bool flag=false;
        //sort(v+l,v+r+1);
        for(int i=l;i<r;i++){
            int k=36600;
            for(int j=i+1;j<=r;j++){
                //printf("i=%d j=%d %d %d\n",i,j,v[i],v[j]);
                k=min(k,abs(v[i]-v[j]));
            }
            if(k<=365){
                flag=true;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}