#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,opt,a;
    cin>>t;
    vector<int> v;
    while(t--){
        cin>>opt>>a;
        if(opt==1){
            v.push_back(a);
        }else{
            cout<<v[v.size()-a]<<endl;
        }
    }
    return 0;
}