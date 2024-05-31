#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int lcm(int a,int b){
    return 1ll*a*b/__gcd(a,b);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n&1){
            cout<<"1 "<<n/2<<' '<<n/2<<endl;
        }else{
            if(n%4==0){
                cout<<n/2<<' '<<n/4<<' '<<n/4<<endl;
            }else cout<<"2 "<<n/2-1<<' '<<n/2-1<<endl;
        }
    }
    return 0;
}