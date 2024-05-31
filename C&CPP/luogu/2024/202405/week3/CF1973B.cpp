#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N],n;
bool check(int k){
    int res=0;
    for(int i=1;i<=k;i++){
        res=res|a[i];
    }
    for(int i=2;i+k-1<=n;i++){
        int tmp=0;
        for(int j=0;j<k;j++){
            tmp=tmp|a[i+j];
        }
        if(tmp!=res)return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int l=1,r=n;
        while(l<r){
            int mid=(l+r)>>1;
            if(check(mid))r=mid;
            else l=mid+1;
        }
        cout<<l<<endl;
    }
    return 0;
}