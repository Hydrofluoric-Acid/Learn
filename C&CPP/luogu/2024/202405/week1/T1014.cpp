#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e7 + 5;
using namespace std;
int minp[N];
bool vis[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> primes;
    for(int i=2;i<N;i++){
        if(!vis[i])primes.push_back(i),minp[i]=i;
        for(int j=0;j<primes.size()&&i*primes[j]<N;j++){
            vis[i*primes[j]]=true;
            minp[i*primes[j]]=primes[j];
            if(i%primes[j]==0)break;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            if(a==1)cout<<1<<endl;
            else cout<<0<<endl;
            continue;
        }
        if(a<b)swap(a,b);
        a-=b;
        if(a==1){
            cout<<-1<<endl;
            continue;
        }else{
            int ans=INT_MAX;
            while(a>1){
                int p=minp[a];
                ans=min(ans,(int)ceil(1.0*b/p)*p-b);
                while(a%p==0)a/=p;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}