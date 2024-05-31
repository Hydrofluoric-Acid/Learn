#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=2*n;i++){
        a[i]=2*n+1-i;
    }
    for(int i=1;i<=k;i++){
        swap(a[2*i-1],a[2*i]);
    }
    for(int i=1;i<=2*n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}