#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q,k;
    cin>>n>>q;
    vector<bool> vis(n+1,false);
    vector<int> primes;


    /* for(int i=2;i<=n;i++){
        if(!vis[i]){
            primes.push_back(i);
            for(int j=i*i;j<=n;j+=i){
                vis[j]=true;
            }
        }
    } */


    for(int i=2;i*i<=n;i++){
        if(!vis[i]){
            for(int j=i*i;j<=n;j+=i){
                vis[j]=true;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(!vis[i])primes.push_back(i);
    }
    while(q--){
        cin>>k;
        cout<<primes[k-1]<<endl;
    }
    /* for(int i=0;i<primes.size();i++){
        cout<<primes[i]<<" ";
    } */
    return 0;
}