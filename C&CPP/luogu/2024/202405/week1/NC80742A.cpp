#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(b<=a&&b<=c){
        cout<<min(a,c)-b;
    }else cout<<0;
    return 0;
}