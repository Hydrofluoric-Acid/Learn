#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N],b[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    if(n<3){
        cout<<0;
        return 0;
    }
    sort(b,b+n);
    bool f=false;
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]){
            f=true;
            break;
        }
    }
    if(!f){
        cout<<0;
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==b[i]){
            cout<<n;
            return 0;
        }
    }
    cout<<0;
    return 0;
}