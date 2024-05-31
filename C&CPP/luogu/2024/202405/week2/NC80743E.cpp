#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int n,k;
ll dp[1010][1010];
int a[1010];
ll jie(int x){
    ll res=1;
    if(x==0)return 1;
    for(int i=2;i<=x;i++){
        res*=i;
    }
    return res;
}
int C(int i,int len){
    return jie(len)/jie(i);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        a[i+1]=s[i]-'0';
    }
    // for(int i=1;i<=n;i++){
    //     cout<<a[i]<<' ';
    // }
    //cout<<endl;
    for(int i=1;i<=n;i++){
        dp[i][1]=a[i]*1ll;
        dp[i][1]+=dp[i-1][1];
       
    }
    for(int i=2;i<=n;i++){
        for(int len=2;len<=i&&len<=k;len++){
            if(i==len){
                dp[i][i]=dp[i-1][i-1]*10+a[i];
            }else{
                dp[i][len]=dp[i-1][len]+dp[i-1][len-1]*10+a[i]*(i-1);
            }
            
            dp[i][len]%=mod;
            //cout<<dp[i][len]<<" ";
        }
        //cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int len=1;len<=min(i,k);len++){
            cout<<dp[i][len]<<' ';
        }
        cout<<endl;
    }
    cout<<dp[n][k];
    return 0;
}