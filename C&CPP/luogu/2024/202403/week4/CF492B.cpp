#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,l;
    cin>>n>>l;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    double ans=0;
    for(int i=0;i<n-1;i++){
        ans=max(ans,(v[i+1]-v[i])/2.0);
    }
    if(v[0]!=0)ans=max(ans,v[0]*1.0);
    if(v[n-1]!=l)ans=max(ans,1.0*(l-v[n-1]));
    printf("%.10f",ans);
    return 0;
}