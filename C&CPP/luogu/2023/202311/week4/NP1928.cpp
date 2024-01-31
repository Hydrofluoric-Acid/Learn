/* #include<bits/stdc++.h>
using namespace std;
bool exist(char c,string s,int start,int end){
    for(int i=start;i<=end;i++){
        if(s[i]==c)return i;
    }
    return -1;
}
string expand(string s){
    string ans="";
    bool flag=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='['){
            flag=false;
        }
        if(flag)s+=s[i];
    }
    int l=s.length()-1,r=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='[')l=min(l,i);
        if(s[i]==']')r=max(r,i);
    }
    return ans+expand(s.substr(l,r+1));
}

int main(){
    string s;
    cin>>s;
    cout<<expand(s);
} */
#include<iostream>
#include<cstring>
using namespace std;
string expand(){
    string s="",x;
    char c;
    int D;
    while(cin>>c){
        if(c=='['){
            cin>>D;
            x=expand();
            while(D--)s+=x;
        }else if(c==']'){
            return s;
        }else s+=c;
    }
    return s;
}
int main(){
    cout<<expand();
    return 0;
}