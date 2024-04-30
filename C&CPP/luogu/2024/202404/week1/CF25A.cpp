#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int f1=110,f2=110,n1=0,n2=0,x;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x&1){
            f1=min(f1,i);
            n1++;
        }else{
            f2=min(f2,i);
            n2++;
        }
    }
    if(n1>n2)cout<<f2;
    else cout<<f1;
    return 0;
}