#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n&1){
            cout<<((n+1)/2*x+n/2*(int)ceil(x/2.0))<<endl;
        }else{
            cout<<(n/2*x+n/2*ceil(x/2.0))<<endl;
        }
    }
    return 0;
}