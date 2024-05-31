#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    if(s.length()==1){
        int g=stoi(s);
        if(g%4==0){
            cout<<0;
        }else cout<<-1;
    }else if(s.length()==2){
        int g=stoi(s);
        if(g%4==0){
            cout<<0;
        }else if((g%10*10+g/10)%4==0){
            cout<<1;
        }else cout<<-1;
    }else{
        int g=s[s.length()-1]-'0'+(s[s.length()-2]-'0')*10;
        if(g%4==0){
            cout<<0;
            return 0;
        }
        g=s[0]-'0'+(s[s.length()-1]-'0')*10;
        if(g%4==0){
            cout<<1;
            return 0;
        }
        for(int i=0;i<=s.length()-3;i++){
            g=(s[i]-'0')*10+s[i+1]-'0';
            if(g%4==0){
                cout<<i+2;
                return 0;
            }
        }
        cout<<-1;
    }
    return 0;
}