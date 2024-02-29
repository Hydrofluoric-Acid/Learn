#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e9;
using namespace std;
string ans[2]={"4430091","8335366"};
/* inline int cal(int x){
    string s=to_string(x);
    int len=s.length();
    int a=0,b=0;
    for(int i=0;i*2<len;i++){
        a+=s[i]-'0';
        b+=(s[len-i-1]-'0');
    }
    if(a==b){
        return 1;
    }
    return 0;
} */
ll ans2=0;
void dfs(int i,int j){
    if(j==70)ans2++;
    if(i==31||j==100)return;
    dfs(i+1,j+10);
    dfs(i+1,0);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /* int ans1=0;
    for(int i=10;i<=99;i++){
        ans1+=cal(i);
    }
    for(int i=1000;i<=9999;i++){
        ans1+=cal(i);
    }
    for(int i=100000;i<=999999;i++){
        ans1+=cal(i);
    }
    for(int i=10000000;i<=99999999;i++){
        ans1+=cal(i);
    }
    cout<<ans1; */
    //dfs(1,0);
    //cout<<ans2;
    char c;
    cin>>c;
    if(c=='A'){
        cout<<4430091;
    }else{
        cout<<8335366;
    }
    return 0;
}