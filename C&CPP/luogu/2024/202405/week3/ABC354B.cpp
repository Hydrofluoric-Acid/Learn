#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
struct node{
    string s;
    int c;
};
node a[120];
bool cmp(node b,node c){
    return b.s<c.s;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll co=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].s>>a[i].c;
        co+=a[i].c;
    }
    co%=n;
    sort(a,a+n,cmp);
    cout<<a[co].s;
    return 0;
}