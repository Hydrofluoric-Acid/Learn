#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a=0,b;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>b;
            a=a^b;
        }
        if(a)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}