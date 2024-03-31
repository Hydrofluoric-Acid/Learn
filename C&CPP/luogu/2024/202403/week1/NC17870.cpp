#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string t="bob",s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
        }
    }
    int a=s.find(t);
    if(a>=0&&a<s.length()){
        cout<<a;
    }else{
        cout<<-1;
    }
    return 0;
}