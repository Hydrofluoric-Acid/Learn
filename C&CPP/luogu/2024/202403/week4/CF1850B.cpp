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
        int a,b=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x<=10&&y>b){
                a=i+1;
                b=y;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}