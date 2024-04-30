#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        string s="";
        vector<vector<int>> v(n+1,vector<int>(2,0));
        for(int i=1;i<=n;i++){
            cin>>c;
            s+=c;
            v[i][c-'0']++;
            v[i][0]+=v[i-1][0],v[i][1]+=v[i-1][1];
        }
        double f=INT_MAX*1.0;
        int ans=n;
        int tmp=(int)ceil((n+1)/2);
        if(v[n][0]>=tmp){
            f=tmp;
            ans=n;
        }
        if(v[n][1]>=tmp){
            f=tmp;
            ans=0;
        }
        for(int i=1;i<n;i++){
            int l=(int)ceil((i+1)/2),r=(int)ceil((n-i+1)/2);
            //cout<<l<<' '<<r<<' '<<v[i][0]<<' '<<v[n][1]-v[i][1]<<' '<<fabs(n/2.0-i)<<endl;
            if(v[i][0]>=l&&v[n][1]-v[i][1]>=r&&fabs(n/2.0-i)<f){
                f=fabs(n/2.0-i);
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}