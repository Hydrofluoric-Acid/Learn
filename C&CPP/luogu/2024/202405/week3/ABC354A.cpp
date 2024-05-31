#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,cur=0,g=1;
    cin>>h;
    for(int i=0;;i++){
        cur+=g;
        g*=2;
        if(cur>h){
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}