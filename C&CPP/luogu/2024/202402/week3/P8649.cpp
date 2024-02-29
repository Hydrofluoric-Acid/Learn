/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    ll ans=0;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]%k==0)ans++;
        v[i]+=v[i-1];
    }
    
    for(int l=1;l<n;l++){
        for(int r=l+1;r<=n;r++){
            if((v[r]-v[l-1])%k==0){
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
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<ll,ll> mp;
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    mp[0]=1;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        sum=(sum+x)%k;
        mp[sum]++;
    }
    sum=0;
    for(int i=0;i<k;i++){
        if(mp[i]&1){
            sum+=(mp[i]-1)/2*mp[i];
        }else{
            sum+=mp[i]/2*(mp[i]-1);
        }
    }
    cout<<sum;
    return 0;
}