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
#define N 80010
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll st[N],ans=0,n,v[N],p=1;
    cin>>n;
    for(ll i=n;i>=1;i--){
        cin>>v[i];
    }
    for(ll i=1;i<=n;i++){
        if(p==1||v[st[p-1]]<v[i]){
            st[p++]=i;
        }else{
            while(p!=1&&v[st[p-1]]>v[i]){
                p--;
                ans+=i-st[p-1]-1;
            }
            
            st[p++]=i;
        }
    }
    cout<<ans;
    return 0;
}