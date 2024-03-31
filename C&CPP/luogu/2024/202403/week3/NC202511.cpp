#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e4 + 5;
using namespace std;
string s1,s2;
string add(){
    int len=max(s1.length(),s2.length());
    vector<int> v(len+1,0);
    for(int i=len-1;i>=0;i--){
        int k=0;
        if(i<s1.length())k+=s1[len-i-1]-'0';
        if(i<s2.length())k+=s2[len-i-1]-'0';
        v[len-i-1]=k;
    }
    for(int i=0;i<len;i++){
        v[i+1]+=v[i]/10;
        v[i]%=10;
    }
    string res="";
    for(int i=len;i>=0;i--){
        res+=to_string(v[i]);
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='+'||s[s.length()-1]=='+'){
            cout<<"skipped"<<endl;
            continue;
        }
        s1="",s2="";
        int i;
        for(i=0;i<s.length();i++){
            if(s[i]=='+')break;
            s1+=s[i];
        }
        for(i=i+1;i<s.length();i++){
            if(s[i]=='+')break;
            s1+=s[i];
        }
        if(i!=s.length()-1){
            cout<<"skipped"<<endl;
            continue;
        }
        cout<<add()<<endl;
    }
    return 0;
}