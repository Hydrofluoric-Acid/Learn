#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_set<int> u;
    int n;
    cin>>n;
    vector<bool> v(n+1,false);
    for(int i=2;i<=n;i++){
        if(!v[i]){
            u.insert(i);
        }
        for(auto k:u){
            if(1ll*k*i>n)break;
            v[i*k]=true;
            if(i%k==0)break;
        }
    }
    ll res=0;
    for(int i=2;i<=n;i++){
        if(u.find(i)!=u.end())res+=i;
        else{
            for(auto k:u){
                if(i%k==0){
                    res+=k;
                    break;
                }
            }
        }
    }
    cout<<res;
    return 0;
}