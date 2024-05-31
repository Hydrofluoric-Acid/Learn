#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 105;
using namespace std;
int d[N],a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>d[i];
    }
    a[1]=d[1];
    for(int i=2;i<=n;i++){
        if(d[i]&&a[i-1]-d[i]>=0){
            cout<<-1;
            return 0;
        }
        a[i]=a[i-1]+d[i];
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}