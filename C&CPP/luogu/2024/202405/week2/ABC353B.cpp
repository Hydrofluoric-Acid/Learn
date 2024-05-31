#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 200;
using namespace std;
int a[N],cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,x;
    cin>>n>>k;
    stack<int> st;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i==0)a[cnt]=x;
        else{
            if(a[cnt]+x<=k)a[cnt]+=x;
            else a[++cnt]=x;
        }
    }
    cout<<cnt+1;
    return 0;
}