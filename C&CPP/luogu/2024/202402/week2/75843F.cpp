#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        if(v[i-1]+1<v[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}