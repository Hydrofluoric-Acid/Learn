#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>b)swap(a,b);
        if((c>=a&&d<=a)||(c<=a&&d>=a)||(c>=b&&d<=c)||(c<=b&&d>=b))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}