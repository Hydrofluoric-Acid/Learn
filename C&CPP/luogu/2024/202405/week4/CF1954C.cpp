#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
void solve(){
    string x,y;
    cin>>x>>y;
    int i;
    for(i=0;i<x.length();i++){
        if(x[i]!=y[i])break;
    }
    for(int j=i+1;j<x.length();j++){
        if(x[i]>y[i]&&x[j]>y[j])swap(x[j],y[j]);
        if(x[i]<y[i]&&x[j]<y[j])swap(x[j],y[j]);
    }
    cout<<x<<endl<<y<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}