#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
typedef long long ll;
const int N = 12300;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=0,n,V,a,b,c;
    vector<int> v(N),w(N);
    cin>>n>>V;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        int k=1;
        while(c>=k){
            t++;
            v[t]=k*a,w[t]=k*b;
            c-=k;
            k*=2;
        }
        if(c>0){
            t++;
            v[t]=c*a,w[t]=c*b;
        }
    }
    /* vector<vector<int>> dp(t+1,vector<int>(V+1,0));
    for(int i=1;i<=t;i++){
        for(int j=0;j<=V;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=v[i])dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
        }
    } */
    /* for(int i=1;i<=t;i++){
        for(int j=0;j<=V;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    } */
    vector<int> dp(V+1);
    for(int i=1;i<=t;i++){
        for(int j=V;j>=v[i];j--){
            dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
        }
    }
    cout<<dp[V];
    //cout<<dp[t][V];
    return 0;
}