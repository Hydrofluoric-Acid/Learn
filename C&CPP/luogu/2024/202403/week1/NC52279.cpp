#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,md=1;
    cin>>n>>k;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        md=max(md,t);
    }
    ll res=0;
    res=md-1+md-k;
    return 0;
}