#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int t[26]={0};
    for(int i=0;i<s.length();i++){
        t[s[i]-97]++;
    }
    int min_e=101,max_e=-1;
    for(int i=0;i<26;i++){
        if(t[i]!=0){
            min_e=min(min_e,t[i]);
            max_e=max(max_e,t[i]);
        }
    }
    int n=max_e-min_e;
    if(n==0||n==1){cout<<"No Answer"<<endl<<0;return 0;}
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"No Answer"<<endl<<0;
        }
    }
    cout<<"Lucky Word"<<endl<<n;
}