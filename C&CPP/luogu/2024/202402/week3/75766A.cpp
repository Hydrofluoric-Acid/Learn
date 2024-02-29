#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char a,b;
    if(a==b){
        cout<<2<<endl<<a<<endl<<a<<b;
    }else{
        cout<<4<<endl<<a<<endl<<b<<endl<<a<<b<<endl<<b<<a;
    }
    return 0;
}