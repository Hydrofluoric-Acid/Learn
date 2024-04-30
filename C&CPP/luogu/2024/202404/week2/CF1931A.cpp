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
        string ans="zzz";
        for(int i=0;i<26;i++){
            for(int j=i;j<26;j++){
                for(int k=j;k<26;k++){
                    string tmp="";
                    tmp+=(char)(i+'a');
                    tmp+=(char)(j+'a');
                    tmp+=(char)(k+'a');
                    if(i+j+k+3==n&&tmp<ans){
                        ans=tmp;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}