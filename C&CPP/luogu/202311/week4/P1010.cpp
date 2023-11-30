#include<bits/stdc++.h>
using namespace std;
string s[15];
string f(int n){
    string result="";
    if(n==0)result+="0";
    if(n==1)result+="2(0)";
    if(n==2)result+="2";
    if(result!="")return result;
    for(int i=14;i>=0;i--){
        int tmp=(1<<i);
        if((n/tmp)!=0){
            if(result!="")result+="+";
            if(i==1)result+="2";
            else result+="2("+f(i)+")";
            n-=(n/tmp*tmp);
        }
        
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
