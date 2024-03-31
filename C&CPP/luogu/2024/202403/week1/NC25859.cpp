#include <iostream>
#include <algorithm>
#define endl "\n"
#define gcd(a,b) __gcd(a,b)
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
ll lcm(int a,int b){
    return a*b/gcd(a,b);
}
ll x1,y1,x2,y2,x,y,g;
pair<ll,ll> multiply(int x1,int y1,int x2,int y2){
    x=x1*x2,y=y1*y2;
    g=gcd(x,y);
    return make_pair(x/g,y/g);
}
pair<ll,ll> add(int x1,int y1,int x2,int y2){
    x=x1+x2,y=y1,g=gcd(x,y);
    if(x==0)y=0;
    return make_pair(x/g,y/g);
}
    

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pair<ll,ll> p;
    cin>>x1>>y1>>x2>>y2;
    if(y1==y2){
        p=add(x1,y1,x2,y2);
        cout<<p.first<<" "<<p.second<<endl;
        p=add(x1,y1,x2*-1,y2);
        cout<<p.first<<" "<<p.second<<endl;
    }else{
        p=add(x1*y2,y1*y2,x2*y1,y1*y2);
        cout<<p.first<<" "<<p.second<<endl;
        p=add(x1*y2,y1*y2,x2*y1*-1,y1*y2);
        cout<<p.first<<" "<<p.second<<endl;
    }
    p=multiply(x1,y1,x2,y2);
    cout<<p.first<<" "<<p.second<<endl;
    p=multiply(x1,y1,y2,x2);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}