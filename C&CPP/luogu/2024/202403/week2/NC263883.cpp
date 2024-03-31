/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<int> a(n+1),b(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i]^b[j]==a[j]^b[i]){//超时
                ans++;
            }
        }
    }
    return 0;
} */