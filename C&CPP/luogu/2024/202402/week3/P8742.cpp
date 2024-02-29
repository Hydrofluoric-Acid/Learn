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
    set<int> s;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            int a=v[i]-v[j];
            if(a>0)s.insert(a);
            s.insert(v[i]+v[j]);
        }
    }
    cout<<s.size();
    return 0;
}