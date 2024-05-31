#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e6 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        a[i]=i;
        a[i]+=a[i-1];
    }
    for(int i=1;i<=m;i++){
        for(int j=i+1;j<=m;j++){
            if(a[j]-a[i-1]==m){
                cout<<i<<" "<<j<<endl;
                break;
            }
            if(a[j]>a[i-1]+m)break;
        }
    }
    return 0;
}