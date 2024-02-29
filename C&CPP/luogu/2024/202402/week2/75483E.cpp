#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 365;
using namespace std;
bool isy(int a){
    if((a%400==0)||(a%4==0&&a%100!=0)){
        return true;
    }
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ll ans=0;
        int k=0,j=0;
        for(int i=a;i<=b;i++){
            if(isy(i)){
                k=i;
                cout<<k<<endl;
                break;
            }
        }
        for(int i=a;i>=b;i--){
            if(isy(i)){
                j=i;
                break;
            }
        }
        int t=(j-k)/4+1;
        /* if(k){
            for(int i=k;i<=b;i+=4){
                t++;
            }
        } */
        
        ans+=t*366+(b-a+1-t)*365;
        cout<<ans<<endl;
    }
    return 0;
}