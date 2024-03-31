#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        double a,b,c,d;
        cin>>a>>c>>d;
        b=pow(a,exp(1))/c;
        cout<<setprecision(d)<<fixed<<.0*b<<endl;
    }
    return 0;
}