#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int len,ans1=1,t1=0,ans2=1,t2=0;
        string s;
        cin>>len>>s;
        for(int i=0;i<len;i++){
            if(s[i]=='0'){
                t1=0;
            }else if(s[i]=='1'||s[i]=='2'){
                t1++;
                ans1=max(ans1,t1);
            }
            if(s[i]=='1'){
                t2=0;
            }else if(s[i]=='0'||s[i]=='2'){
                t2++;
                ans2=max(ans2,t2);
            }
        }
        cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}