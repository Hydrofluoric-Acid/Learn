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
        int a[3]={3,3,3};
        char c;
        for(int i=0;i<9;i++){
            cin>>c;
            a[c-'A']--;
        }
        for(int i=0;i<3;i++){
            if(a[i]){
                cout<<(char)('A'+i)<<endl;
                break;
            }
        }
    }
    return 0;
}