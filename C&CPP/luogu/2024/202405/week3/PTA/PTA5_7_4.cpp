#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
ll fib(int a){
    if(a<=0)return 0;
    if(a==1||a==2)return 1;
    else return fib(a-1)+fib(a-2);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<"请输入几个月整数值:";
    int n;
    cin>>n;
    cout<<"numk="<<fib(n);
    return 0;
}