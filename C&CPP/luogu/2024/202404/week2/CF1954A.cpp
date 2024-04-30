#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 60;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> tong(m+1,n/m);
        n%=m;
        for(int i=1;i<=n;i++){
            tong[i]++;
        }
        int md=0,s=0;
        for(int i=1;i<=m;i++){
            s+=tong[i];
            if(md<tong[i])md=tong[i];
        }
        if(md+k>=s)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}