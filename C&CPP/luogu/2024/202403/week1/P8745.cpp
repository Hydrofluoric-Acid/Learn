/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=(int)sqrt(1.0*n*i);//暴力60/100
        if(1ll*k*k==1ll*n*i){
            cout<<i;
            return 0;
        }
    }
    return 0;
} */
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e7+5;
using namespace std;
bool isPrime(ll n){
    for(ll i=2;i<=n/i;i++){
        if(n%i==0)return false;
    }
    return true;
}
int primes[N],cnt=0;
bool st[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    if(isPrime(n)){
        cout<<n;
        return 0;
    }
    for(int i=2;i<=N;i++){
        if(st[i])continue;
        primes[cnt++]=i;
        for(int j=i+i;j<=n;j+=i){
            st[j]=true;
        }
    }
    map<ll,int> mp;
    for(ll i=0;i<cnt;i++){
        while(n%primes[i]==0){
            n/=primes[i];
            mp[primes[i]]++;
        }
    }
    ll res=1;
    for(auto k:mp){
        if(k.second&1){
            res*=k.first;
            continue;
        }
    }
    cout<<res;
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool isprime(ll a){
    for(int i=2;1ll*i*i<=a;i++){
        if(a%i==0)return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,t;
    cin>>n;
    if(isprime(n)){
        cout<<n;
        return 0;
    }
    t=n;
    map<ll,int> mp;
    for(ll i=2;i<=n/i;i++){
        while(t%i==0&&n){
            mp[i]++;
            t/=i;
        }
    }
    if(t!=1)mp[t]++;//关键一句，经常忘记
    ll res=1;
    for(auto k:mp){
        if(k.second&1){
            res*=k.first;
        }
        //cout<<k.first<<" "<<k.second<<endl;
    }
    cout<<res;
    return 0;
}