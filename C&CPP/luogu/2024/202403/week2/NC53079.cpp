#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 3e7+5;
using namespace std;
ll res=0;
int primes[N],cnt=0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_set<int> u;
    int n;
    cin>>n;
    vector<bool> v(n+1,false);
    for(int i=2;i<=n;i++){
        if(!v[i]){
            primes[cnt++]=i,res+=i;
        }
        for(int j=0;j<cnt&&i*primes[j]<=n;j++){//线性筛过程中累加最小质因数
            v[i*primes[j]]=1;
            res+=primes[j];
            if(i%primes[j]==0)break;
        }
    }
    cout<<res;
    return 0;
}