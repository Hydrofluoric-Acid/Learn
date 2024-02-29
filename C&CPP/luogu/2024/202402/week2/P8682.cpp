#include <bits/stdc++.h>
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
    sort(v.begin()+1,v.end());
    int g=v[2]-v[1];
    if(!g){
        cout<<n;
        return 0;
    }
    for(int i=3;i<=n;i++){
        g=__gcd(v[i]-v[i-1],g);
    }
    cout<<((v[n]-v[1])/g+1);
    return 0;
}