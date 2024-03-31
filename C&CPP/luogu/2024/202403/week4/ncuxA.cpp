#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool vis[10000];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> primes;
    for(int i=2;i*i<=10000;i++){
        if(!vis[i]){
            primes.push_back(i);
        }
        for(int p:primes){
            if(i*p>10000)break;
            vis[i*p]=true;
            if(i%p==0)break;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
    }
    return 0;
}