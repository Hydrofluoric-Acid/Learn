#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin>>t>>n;
    while(t--){
        int a;
        vector<int> v(2,0);
        for(int i=0;i<n;i++){
            cin>>a;
            v[a]++;
        }
        cout<<abs(v[1]-v[0])<<endl;
    }
    return 0;
}