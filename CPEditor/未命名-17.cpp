
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
        for(int i=1;i<=n;i++,cout<<endl){
            string s="";
            for(int j=1;j<=n;j++){
                
                if((i%2==0&&j%2==0)||(i%2==1&&j%2==1)){
                    s+="##";
                }else s+="..";
            }
            cout<<s<<endl<<s;
        }
    }
    return 0;
}