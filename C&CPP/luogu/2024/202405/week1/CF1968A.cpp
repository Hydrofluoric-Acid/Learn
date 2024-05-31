#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int ans=0,ansy;
        for(int y=1;y<x;y++){
            int tmp=__gcd(x,y)+y;
            if(tmp>ans){
                ans=tmp;
                ansy=y;
            }
        }
        cout<<ansy<<endl;
    }
    return 0;
}