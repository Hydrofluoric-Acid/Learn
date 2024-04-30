#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool vis[N+1];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> primes;
    for(int i=2;i<=N;i++){
        if(!vis[i]){
            primes.push_back(i);
        }
        for(int j:primes){
            if(j*i>N)break;
            vis[j*i]=true;
            if(i%j==0)break;
        }
    }
    for(auto i:primes){
        cout<<i<<" ";
    }
    return 0;
}