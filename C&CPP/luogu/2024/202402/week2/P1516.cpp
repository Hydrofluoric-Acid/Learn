#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int extgcd(ll a,ll b,ll &x,ll &y){
    if(b==0){
        x=1,y=0;
        return a;
    }
    ll d=extgcd(b,a%b,x,y);
    ll t=x;
    x=y,y=t-a/b*y;
    return d;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x,y,m,n,l;
    cin>>x>>y>>m>>n>>l;
    ll t,p,a=x-y,b=n-m;
    if(b<0){
        b=-b,a=-a;
    }
    int d=extgcd(b,l,t,p);
    if(a%d){
        cout<<"Impossible";
    }else{
        cout<<((t*a/d)%(l/d)+(l/d))%(l/d);
    }
    return 0;
}