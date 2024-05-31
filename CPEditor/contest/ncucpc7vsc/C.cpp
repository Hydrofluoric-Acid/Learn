#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x,y,k,d;
    cin>>x>>y>>k>>d;
    if(abs(x+99*y-d)<=k&&x&&y){
        cout<<"Hello World!";
    }else cout<<"Help Need!";
    return 0;
}