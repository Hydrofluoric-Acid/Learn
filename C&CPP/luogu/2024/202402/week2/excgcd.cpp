#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
void extgcd(int a,int b,int &x,int &y){
    if(b==0)x=1,y=0;
    else{
        extgcd(b,a%b,x,y);
        int t=x-a/b*y;
        x=y,y=t;
    }
}
int extgcd1(int a,int b,int &x,int &y){
    if(b==0){
        x=1,y=0;
        return a;
    }
    int d=extgcd1(b,a%b,x,y),t=x;
    x=y,y=t-a/b*y;
    return d;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a=2,b=3,x,y,m=5;
    extgcd(a,b,x,y);
    cout<<x<<" "<<y<<endl;
    int d=extgcd1(a,m,x,y);
    if(b%d==0){
        cout<<(1ll*x*b/d%m);
    }
    return 0;
}