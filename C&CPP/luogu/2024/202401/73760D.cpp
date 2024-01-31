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
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y,l,r,L,R;
    cin>>x>>y>>l>>r;
    
    set<int> s;
    while(true){
        L=l/x,R=r/y;
        for(int i=L;i<=R;i++){
            if(x%i==0&&y%i==0){
                x/=i,y/=i;
                s.insert(x);
            }else{
                x*=i,y*=i;
                s.insert(x);
            }
        }
    }
    return 0;
}