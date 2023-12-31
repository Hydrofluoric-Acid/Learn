#include<iostream>
#include<algorithm>
using namespace std;
string add(string a,string b){
    int la[500]={0},lb[500]={0},lc[1001]={0},len=max(a.length(),b.length());
    for(int i=a.length()-1,j=0;i>=0;i--){
        la[j++]=a[i]-'0';
    }
    for(int i=b.length()-1,j=0;i>=0;i--){
        lb[j++]=b[i]-'0';
    }
    for(int i=0;i<len;i++){
        lc[i]+=la[i]+lb[i];
        lc[i+1]+=lc[i]/10;
        lc[i]%=10;
    }
    if(lc[len])len++;
    string res="";
    for(int i=len-1;i>=0;i--){
        res+=lc[i]+'0';
    }
    return res;
}
string multiply(string a,string b){
    int la[500]={0},lb[500]={0},lc[1001]={0},len=a.length()+b.length();
    for(int i=a.length()-1,j=0;i>=0;i--){
        la[j++]=a[i]-'0';
    }
    for(int i=b.length()-1,j=0;i>=0;i--){
        lb[j++]=b[i]-'0';
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
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
        res+=lc[i]+'0';
    }
    return res;
}
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string res=add(a,b);
    res=multiply(res,c);
    cout<<res;
    return 0;
}