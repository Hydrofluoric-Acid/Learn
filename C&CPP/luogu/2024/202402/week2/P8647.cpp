/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int n, k, start = 0;
vector<int> v1, v2;
bool check(int a) {
    ll res = 0;
    for (int i = 0; i < n; i++) {
        res += (v1[i] / a) * (v2[i] / a);
    }
    return res >= k;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    v1.resize(n), v2.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
        start = max(start, max(v1[i], v2[i]));
    }
    int ans = 0;
    for (int i = start; i > 0; i--) {
        if (check(i)) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int n, k, start = 0;
vector<int> v1, v2;
bool check(int a) {
    ll res = 0;
    for (int i = 0; i < n; i++) {
        res += (v1[i] / a) * (v2[i] / a);
    }
    return res >= k;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    v1.resize(n),v2.resize(n);
    for(int i=0;i<n;i++){
        cin>>v1[i]>>v2[i];
    }
    int l=1,r=100000;
    while(l<r){
        int mid=(l+r+1)/2;
        if(check(mid))l=mid;
        else r=mid-1;
    }
    cout<<l;
    return 0;
}