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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end()),sort(b.begin(),b.end());
    int p=0,q=0;
    int ans=0;
    while(p<n&&q<n){
        if(a[p]*2>b[q]){
            ans++;
            p++,q++;
        }else{
            p++;
        }
    }
    cout<<ans;
    return 0;
}