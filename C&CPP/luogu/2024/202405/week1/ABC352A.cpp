#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    if((x>=z&&z>=y)||(x<=z&&z<=y)){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
    return 0;
}