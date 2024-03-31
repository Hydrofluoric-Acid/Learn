#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[32]={10,11,100,101,110,111,1000,1001,1010,1011,
    1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,
    10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,
    100000,100001};
    int t;
    cin>>t;
    while(t--){
        int n,c1=0,c2=0;
        cin>>n;
        string s=to_string(n);
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')c1++;
            if(s[i]=='1')c2++;
        }
        if(c1+c2==s.length()){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<7;i++){
            for(int j=0;j<32;j++){
                if(n%a[j]==0){
                    while(n%a[j]==0){
                        n/=a[j];
                    }
                }
            }
        }
        if(n==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}