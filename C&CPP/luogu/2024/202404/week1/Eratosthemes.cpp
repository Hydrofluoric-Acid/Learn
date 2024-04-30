#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool vis[N+1];
vector<int> primes;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=2;i<=N;i++){
        if(!vis[i]){
            primes.push_back(i);
            if(1ll*i*i>N)continue;
            for(int j=i*i;j<=N;j+=i){
                vis[j]=true;
            }
        }
    }
    for(auto i:primes){
        cout<<i<<" ";
    }
    return 0;
}