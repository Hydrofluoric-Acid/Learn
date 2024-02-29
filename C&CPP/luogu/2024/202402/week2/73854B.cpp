#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 2e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,mx=INT_MAX,a1,t;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>t;
            if(i==0)a1=t;
            mx=min(mx,t);
        }
        if(mx==a1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}