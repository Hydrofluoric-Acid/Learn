#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin>>n>>m;
    if(n==1)cout<<"Yes";
    else if(m==1)cout<<"No";
    else if((n-1)%(m-1)==0)cout<<"Yes";//要消除n-1个，每次消除m-1个
    else cout<<"No";
    return 0;
}