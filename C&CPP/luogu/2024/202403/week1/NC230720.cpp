#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int check(string s){
    int len=s.length();
    for(int i=0;i*2<len;i++){
        if(s[i]!=s[len-i-1]){
            return 0;
        }
    }
    return len;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int ans=s.length();
    for(int j=2;j<=s.length();j++){
        for(int i=0;i<s.length()-j+1;i++){
            int a=check(s.substr(i,j));
            if(a){
                cout<<a;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}