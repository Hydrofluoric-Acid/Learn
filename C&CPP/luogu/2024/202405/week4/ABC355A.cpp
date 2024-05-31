#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[4];
void solve(){
    int x;
    cin>>x;
    a[x]++;
    cin>>x;
    a[x]++;
    int cnt=0;
    for(int i=1;i<=3;i++){
        if(a[i]==0)cnt++;
    }
    if(cnt>1)cout<<-1;
    else{
        for(int i=1;i<=3;i++){
            if(a[i]==0){
                cout<<i;
                return;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}