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
        int n;
        cin>>n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int a=n,b=1;
        for(int i=2;i<=n;i++){
            if(v[i]!=v[1]){
                a=i-1;
                break;
            }
        }
        for(int i=n-1;i>=1;i--){
            if(v[i]!=v[n]){
                b=i+1;
                break;
            }
        }
        if(a>=b){
            cout<<0<<endl;
        }else{
            if(v[1]==v[n]){
                cout<<b-a-1<<endl;
            }else{
                cout<<min(n-a,b-1)<<endl;
            }
        }
    }
    return 0;
}