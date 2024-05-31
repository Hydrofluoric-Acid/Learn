#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[3];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>a[0]>>a[1]>>a[2];
        if((a[0]+a[1]+a[2])&1)cout<<-1<<endl;
        else{
            sort(a,a+3);
            int ans=0;
            for(int i=0;i<=a[1];i++){
                int g=a[1]+min(a[0]-i,a[2]-a[1]+i);
                ans=max(ans,g);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}