#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int k,m;
bool check(int x){
    return sqrt(x)+log(k)/log(x)<=m*1.0;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>k>>m;
        int l=1,r=10000;
        while(l<r){
            int mid=l+r>>1;
            if(check(mid)){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        cout<<l+1<<endl;
    }
    return 0;
}