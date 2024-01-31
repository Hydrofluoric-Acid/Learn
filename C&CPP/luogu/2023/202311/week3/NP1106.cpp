#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    int k,m=0;
    cin>>s>>k;
    if(s.length()==k){cout<<0;return 0;}
    vector<char> c(s.length());
    vector<int> flag(s.length());
    for(int i=0;i<s.length();i++){
        c[i]=s[i];
    }
    for(int i=0;i<s.length()-1;i++){
        if(c[i]>c[i+1]){
            flag[i]=1;
            m++;
        }
        if(m==k)break;
    }
    for(int i=0;i<s.length();i++){
        if(!flag[i]){
            t+=c[i];
        }
        
    }bool f=true;
    for(int i=0;i<s.length()-k;i++){
        if(t[i]=='0'&&f)continue;
        else{
            cout<<t[i];
            f=false;
        }
    }
    return 0;
}