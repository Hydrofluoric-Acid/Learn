#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n,x;
vector<ll> v;
bool check(int l,int r){
    return v[r]-v[l-1]>=x;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cin>>n>>x;
    v.resize(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    int l=1,r=n;
    for(int i=l;i<=n;i++){
        int tl=i,tr=n;
        if(!check(tl,tr))continue;
        while(tl<tr){
            int mid=tl+tr>>1;
            if(check(i,mid))tr=mid;
            else tl=mid+1;
        }
        //cout<<i<<' '<<tr<<endl;
        if(tr-i<r-l||(tr-i==r-l&&i<l)){
            l=i;
            r=tr;
        }
    }
    cout<<l<<' '<<r;
    return 0;
}