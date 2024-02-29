#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x,ans=0;
    cin>>x;
    for(ll i=2;i<=x/i;i++){
        if(x%i==0){
            while(x%i==0){
                x/=i;
            }
            ans++;
        }
    }
    if(x>1)ans++;
    cout<<ans;
    return 0;
}
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x,ans=0;
    cin>>x;
    for(ll i=2;i<=x;i++){
        if(x%i==0){
            while(x%i==0){
                x/=i;
            }
            ans++;
        }
    }
    cout<<ans;
    return 0;
} */