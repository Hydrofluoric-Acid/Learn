#include<iostream>
#include<algorithm>
using namespace std;
string add(string a,string b){
    int la[1000]={0},lb[1000]={0},lc[1010]={0},len=max(a.length(),b.length());
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
    if(lc[len+1])len++;
    while(lc[len-1])len--;
    string res="";
    for(int i=len-1;i>=0;i--){
        res+=lc[i]+'0';
    }
    return res;
}
int main(){
    string a,b;
    cin>>a;
    cin.ignore();
    cin>>b;
    cout<<add(a,b)<<endl;
    return 0;
}