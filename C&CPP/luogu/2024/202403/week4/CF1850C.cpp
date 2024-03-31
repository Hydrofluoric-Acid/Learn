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
        char c;
        for(int i=0;i<64;i++){
            cin>>c;
            if(c!='.')cout<<c;
        }
        cout<<endl;
    }
    return 0;
}