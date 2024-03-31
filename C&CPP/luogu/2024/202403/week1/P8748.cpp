#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    t/=1000;
    printf("%02d:%02d:%02d",t/3600%24,t%3600/60,t%60);
    return 0;
}