#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(2*n+1);
    map<int,int> mp;
    for(int i=1;i<=2*n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    for(auto k:mp){
        if(k.second&1){
            cout<<-1;
            return 0;
        }
    }
    for(auto k:mp){
        cout<<k.first<<" ";
    }
    cout<<endl;
    for(auto k:mp){
        cout<<k.first<<" ";
    }
    return 0;
}