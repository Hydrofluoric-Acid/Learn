/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if((ll)i*v[i]==(ll)j*v[j]){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a;
    cin>>n;
    map<ll,int> mp;
    for(int i=1;i<=n;i++){
        cin>>a;
        mp[(ll)a*i]++;//加上ll就能AC了
    }
    ll ans=0;
    for(auto it:mp){
        int b=it.second;
        if(b>1){
            if(b&1){
                ans+=((b-1)/2*b);
            }else{
                ans+=(b/2*(b-1));
            }
        }
    }
    cout<<ans;
    return 0;
}