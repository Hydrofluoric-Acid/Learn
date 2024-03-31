#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 1;
using namespace std;
ll v[N]={0,1,2,3,4,5,6,7,8,9};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=10;i<N;i++){
        v[i]=v[i/10]+v[i%10];
    }
    for(int i=1;i<N;i++){
        v[i]+=v[i-1];
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<v[n]<<endl;
    }
    return 0;
}