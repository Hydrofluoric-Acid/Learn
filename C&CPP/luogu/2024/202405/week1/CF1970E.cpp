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
        int x;
        cin>>x;
        int a=x/2,b=a*3;
        if((a^b)==x){
            cout<<a<<" "<<b;
        }else{
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}