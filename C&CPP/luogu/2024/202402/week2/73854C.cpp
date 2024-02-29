#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<char> s(n+1,' ');
    vector<bool> flag(n+1,true);
    int p,q;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        if(s[i]=='I'){
            p=i,q=i;
        }
    }
    cout<<p<<" "<<q<<endl;
    string opt;
    while(k--){
        cin>>opt;
        cin.ignore();
        if(opt=="delete"&&q+1<=n){
            q++;
            flag[q]=false;
        }else if(opt=="backspace"){
            if(p-1>=1&&q+1<=n&&s[p-1]=='('&&s[q+1]==')'){
                flag[p-1]=false,flag[q+1]=false;
                q++,p--;
            }else if(p-1>=1){
                flag[p-1]=false;
                p--;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(flag[i]){
            cout<<s[i];
        }
    }

    return 0;
}