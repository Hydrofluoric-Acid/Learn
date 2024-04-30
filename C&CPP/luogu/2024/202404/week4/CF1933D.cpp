#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]<a[1]){
            cout<<"YES"<<endl;
            continue;
        }
        bool f=false;
        for(int i=1;i<n;i++){
            if(a[i]%a[0]!=0){
                cout<<"YES"<<endl;
                f=true;
                break;
            }
        }
        if(!f)cout<<"NO"<<endl;
    }
    return 0;
}