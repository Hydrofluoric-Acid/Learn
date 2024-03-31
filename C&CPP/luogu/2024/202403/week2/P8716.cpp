#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool check1(string s){
    int a=stoi(s);
    int ms[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y=a/10000,m=a/100%100,d=a%100;
    if(m==0||m>12||d==0)return false;
    if(y%400==0||(y%100!=0&&y%4==0))ms[2]=29;
    if(d>ms[m])return false;
    for(int i=0;i<4;i++){
        if(s[i]!=s[7-i])return false;
    }
    return true;
}
bool check2(int a){
    int ms[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y=a/10000,m=a/100%100,d=a%100;
    if(m==0||m>12||d==0)return false;
    if(y%400==0||(y%100!=0&&y%4==0))ms[2]=29;
    if(d>ms[m])return false;
    string s=to_string(a);
    if(s[0]==s[2]&&s[0]==s[5]&&s[0]==s[7]&&s[1]==s[3]&&s[1]==s[4]&&s[1]==s[6]){
        return true;
    }
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int k1=n/10000,k2=n/10000;
    while(true){
        k1++;
        string s=to_string(k1);
        reverse(s.begin(),s.end());
        string res=to_string(k1)+s;
        if(check1(res)){
            cout<<res<<endl;
            break;
        }
    }
    while(true){
        k2++;
        string s=to_string(k2);
        reverse(s.begin(),s.end());
        string res=to_string(k2)+s;
        if(check2(stoi(res))){
            cout<<res;
            return 0;
        }
    }
    return 0;
}