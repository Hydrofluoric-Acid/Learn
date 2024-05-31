#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
ll a[N],b[N],cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);

    if(n&1){
        b[cnt++]=a[n];
        n--;
    }
    for(int i=1;i*2<=n;i++){
        b[cnt++]=a[i]*a[n-i+1];
    }
    sort(b,b+cnt);
    cout<<b[cnt-1]-b[0]<<endl;
    //for(int i=0;i<cnt;i++)cout<<b[i]<<' ';
    return 0;
}