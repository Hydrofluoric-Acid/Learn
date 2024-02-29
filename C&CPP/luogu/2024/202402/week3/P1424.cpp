#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,n,ans=0;
    cin>>x>>n;
    for(int i=0;i<n;i++){
        int k=x+i;
        if(k%7!=6&&k%7!=0){
            ans+=250;
        }
    }
    cout<<ans;
    return 0;
}