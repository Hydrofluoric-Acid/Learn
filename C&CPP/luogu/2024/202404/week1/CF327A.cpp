#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<vector<int>> v(n+1,vector<int>(2,0));
    for(int i=1;i<=n;i++){
        v[i][0]+=v[i-1][0];
        v[i][1]+=v[i-1][1];
        int x;
        cin>>x;
        v[i][x]++;
    }
    if(v[n][0]==0){
        cout<<n-1;
        return 0;
    }
    int t=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            t=max(t,v[j][0]+v[i-1][1]-v[i-1][0]-v[j][1]);
        }
    }
    cout<<v[n][1]+t;
    return 0;
}