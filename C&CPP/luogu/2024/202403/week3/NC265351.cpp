#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    double a,b,c;
    while(t--){
        cin>>a>>b>>c;
        double ans=pow(a/16,16)+1820*pow(a/16,12)*(pow(b/16,4)+pow(c/16,4));//C(12,16)=1820
        printf("%.12f\n",ans);
    }
    return 0;
}