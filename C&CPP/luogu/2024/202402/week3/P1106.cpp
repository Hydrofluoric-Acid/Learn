#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int to_int(char c){
    return c-'0';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int k;
    cin>>s>>k;
    int t=0;
    while(t<k){
        bool flag=false;
        for(int i=0;i<s.length()-1;i++){
            if(to_int(s[i])>to_int(s[i+1])){
                s.erase(i,1);
                break;
            }
            if(i+2==s.length()&&to_int(s[i])<=to_int(s[i+1])){
                s.erase(s.length()-1,1);
            }
        }
        t++;
        //cout<<t;
    }
    int l=0;
    while(s[0]=='0'&&s.length()>1){
        s.erase(0,1);
    }
    cout<<s;
    return 0;
}