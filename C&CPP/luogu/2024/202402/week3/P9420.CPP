#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const long long N = 23333333333333,n=4840000;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /* vector<ll> dp(4,0);
    string s="";
    for(int i=1;i<=2023;i++){
        s+=to_string(i);
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='2'){
            dp[0]++,dp[2]+=dp[1];
        }else if(s[i]=='0'){
            dp[1]+=dp[0];
        }else if(s[i]=='3'){//5484660609
            dp[3]+=dp[2];
        }
    }
    cout<<dp[3]; */
   
    vector<int> prime;
    vector<bool> nums(n+10,false);
    for(int i=2;i<=n;i++){
        if(!nums[i]){
            prime.push_back(i);
        }
        for(int k:prime){
            if(1ll*i*k>n)break;
            nums[1ll*i*k]=true;
            if(i%k==0)break;
        }
        
    }
    /* for(int i=2;i<=4840000;i++){
        if(nums[i]){
            prime.push_back(i);
        }
    } */
    for(int i=prime.size()-1;i>prime.size()-100;i--){
        cout<<prime[i]<<" ";
    }
    cout<<prime.size()<<endl;
    int ans=0;
    for(int i=0;i<prime.size();i++){
        if(1ll*prime[i]*prime[i]*prime[i]*prime[i]>N)break;
        for(int j=i+1;j<prime.size();j++){
            ll a=1ll*prime[i]*prime[i]*prime[j]*prime[j];
            if(a<2333)continue;
            if(a>1ll*N)break;
            ans++;
            //if(a>=2333&&a<=N)ans++;
        }
    }
    cout<<ans;
    return 0;
}