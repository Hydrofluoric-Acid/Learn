#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
stack< char > c;
char trans(char a){
    if(a=='{')return '}';
    if(a=='[')return ']';
    if(a=='(')return ')';
    return '\0';
}
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(c.empty()){
            c.push(s[i]);
            continue;
        }
        if(trans(s[i])==c.top()){
            c.pop();
        }else c.push(s[i]);
    }
    if(c.empty())cout<<"YES";
    else cout<<"NO";
    return 0;
}