#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,a,b,t=0;
    cin>>n>>m;
    vector<int> v(n+1,0);
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        v[a]++;
    }
    int m=*max_element(v.begin(),v.end());
    for(int i=1;i<=n;i++){
        if(v[i]==m){
            t++;
        }
    }
    cout<<t;
    return 0;
}