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
        int x,y;
        cin>>x>>y;
        if(x+1==y){
            cout<<-1<<endl;
            continue;
        }else if(__gcd(x,y)!=1){
            cout<<0<<endl;
            continue;
        }else{
            /* int z=y-x;
            if(z%2==0){
                cout<<1<<endl;
                continue;
            }
            set<int> s;
            for(int i=2;i*i<=z;i++){
                if(z%i==0){
                    s.insert(i);
                    while(z%i==0)z/=i;
                }
            }
            if(z!=1)s.insert(z);
            int ans=INT_MAX;
            for(auto k:s){
                ans=min(ans,(int)ceil(1.0*y/k)*k-y);
            }
            cout<<ans<<endl; */
            int z=y-x,tmp=z,ans=INT_MAX;
            if(z%2==0){
                cout<<1<<endl;
                continue;
            }
            while(z>1){
                int p=minp[z];
                ans=min(ans,(int)ceil(1.0*y/p)*p-y);
                while(z%p==0)z/=p;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}