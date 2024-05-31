/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[2100], n;
ll ans=0;
map<ll, ll> mp;
ll lcm(ll a, ll b) {
    return a * b / __gcd(a, b);
}
void query(ll x) {
    ll ans = 0, Lcm = 1;
    for (int i = 1; i <= n; i++) {
        if (x % a[i] == 0) {
            Lcm = lcm(Lcm, a[i]);
            ans++;
        }
    }
    if (mp[Lcm] == 0 && Lcm == x)
        ans=max(ans,x);
}
void solve() {
    memset(a, 0, sizeof(a));
    mp.clear();
    cin >> n;
    ll LCM = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        LCM = lcm(LCM, a[i]);
        if (LCM > 1e9) {
            cout << n << endl;
            return;
        }
        mp[a[i]]++;
    }

    for (int i = 1; i * i <= LCM; i++) {
        if (LCM % i == 0) {
            query(i);
            query(LCM / i);
        }
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[2100],ans,n;
map<int, int> mp;
ll lcm(ll a,ll b){
    return a*b/__gcd(a,b);
}
void check(int d) {
    if(mp[d])return;
    int LCM=1,cnt=0;
    for(int i=1;i<=n;i++){
        if(d%a[i]==0){
            LCM=lcm(LCM,a[i]);
            cnt++;
        }
    }
    if(LCM==d)ans=max(ans,cnt);
}
void solve() {
    mp.clear();
    ans=0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll x = 1;
    for (int i = 1; i <= n; i++) {
        x = lcm(x, 1ll * a[i]);
        if (x > 1E9) {
            cout << n << endl;
            return;
        }
    }
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            check(i);
            check(x/i);
        }
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}