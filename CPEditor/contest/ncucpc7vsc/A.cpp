#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
char s[N][8];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=7;j++){
            cin>>s[i][j];
        }
    }
    bool f1=true,f2=true;
    for(int i=1;i*2+1<=n;i++){
        for(int j=2;j<=6;j+=2){
            if(s[i*2][j]!=s[i*2+1][j]){
               f1=false;
               break;
            }
        }
        if(!f1)break;
    }
    for(int i=0;i*2+2<=n;i++){
        for(int j=2;j<=6;j+=2){
            if(s[i*2+1][j]==s[i*2+2][j]){
               f2=false;
               break;
            }
        }
        if(!f2)break;
    }
    if(f1&&f2)cout<<"hao shi!";
    else if(!f1&&!f2)cout<<"gan jue bu ru yuan shen";
    else if(f1&&!f2)cout<<"shi dui...";
    else cout<<"shi nian...";
    return 0;
}