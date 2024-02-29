#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int f(int x){
    int a=x%4;
    if(a==1||a==2){
        return x/4*3+1;
    }else if(a==0){
        return x/4*3;
    }else if(a==3){
        return x/4*3+2;
    }
    return 0;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,r;
    cin>>l>>r;
    cout<<(f(r)-f(l-1));
    return 0;
}