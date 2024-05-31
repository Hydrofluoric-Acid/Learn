#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N],b[30][N],n;
bool check(int x){
    for(int i=0;i<30;i++){
        if(b[i][n]){
            for(int k=x;k<=n;k++){
                int l=k-x+1,r=k;
                if(b[i][r]-b[i][l-1]==0)return false;
            }
        }
    }
    return true;
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=0;i<30;i++){//b[i][j]表示前j个数前i位上1的个数
        for(int j=1;j<=n;j++){
            b[i][j]=(a[j]>>i)&1;
            b[i][j]+=b[i][j-1];
        }
    }
    int l=1,r=n;
    while(l<r){
        int mid=l+r>>1;
        if(check(mid)){
            r=mid;
        }else l=mid+1;
    }
    cout<<l<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}