#include<iostream>
#include<vector>
using namespace std;
string Multiply(string a,string b){
    int la[500]={0},lb[500]={0},lc[1000]={0},len=a.length()+b.length();
    for(int i=a.length()-1,j=0;i>=0;i--){
        la[j++]=a[i]-'0';
    }
    for(int i=b.length()-1,j=0;i>=0;i--){
        lb[j++]=b[i]-'0';
    }
    for(int i=0;i<a.length();i++){
        for(int j=0;j<b.length();j++){
            lc[i+j]+=la[i]*lb[j];
        }
    }
    for(int i=0;i<len;i++){
        lc[i+1]+=lc[i]/10;
        lc[i]%=10;
    }
    while(!lc[len-1])len--;
    string res="";
    for(int i=len-1;i>=0;i--){
        res+=(lc[i]+'0');
    }
    return res;
}

int main(){
    
    return 0;
}