/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<int> ans;
    for(int i=n;i>0;i--){
        while(true){
            if(1ll*i*i<=n){
                n=n-i*i;
                ans.push_back(i);
            }else{
                break;
            }
            
        }
    }
    for(int i=ans.size();i<4;i++){
        ans.push_back(0);
    }
    sort(ans.begin(),ans.end());
    for(auto k:ans){
        cout<<k<<" ";
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i*i<=n;i++){
        for(int j=0;i*i+j*j<=n;j++){
            for(int k=0;i*i+j*j+k*k<=n;k++){
                int l=(int)sqrt(n-i*i-j*j-k*k);
                if(i*i+j*j+k*k+l*l==n){
                    printf("%d %d %d %d",i,j,k,l);
                    return 0;
                }
            }
        }
    }
    return 0;
}