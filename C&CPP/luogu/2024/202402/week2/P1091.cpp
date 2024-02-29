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
    vector<int> dp1(n+1,0),dp2(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    /* for(int i=1;i<=n;i++){
        dp1[i]=1;
        dp2[i]=1;
        for(int j=1;j<=i;j++){
            if(v[i]>v[j]){
                dp1[i]=max(dp1[i],dp1[j]+1);
            }
            if(v[i]<v[j]){
                dp2[i]=max(dp2[i],dp2[j]+1);
            }
        }
    } */
    for(int i=1;i<=n;i++){
        dp1[i]=1;
        for(int j=1;j<=i;j++){
            if(v[i]>v[j]){
                dp1[i]=max(dp1[i],dp1[j]+1);
            }
        }
    }
    reverse(v.begin()+1,v.end());
    for(int i=1;i<=n;i++){
        dp2[i]=1;
        for(int j=1;j<=i;j++){
            if(v[i]>v[j]){
                dp2[i]=max(dp2[i],dp2[j]+1);
            }
        }
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,dp1[i]+dp2[n+1-i]-1);
    }
    /* for(int i=1;i<=n;i++){
        cout<<dp1[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<dp2[i]<<" ";
    }
    cout<<endl; */
    cout<<(n-ans);
    return 0;
}