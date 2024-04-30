#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int f[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        ll sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>f[i];
            sum+=f[i];
        }
        if(sum%3==0){
            cout<<0<<endl;
            continue;
        }else if(sum%3==2){
            cout<<1<<endl;
            continue;
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            if((sum-f[i])%3==0){
                flag=true;
                break;
            }
        }
        if(flag)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}