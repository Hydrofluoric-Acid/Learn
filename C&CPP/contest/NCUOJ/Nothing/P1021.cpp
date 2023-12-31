#include<iostream>
#include<algorithm>
#include<vector>
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
    int a;
    cin>>a;
    if(a==0){
        cout<<1;
        return 0;
    }
    vector<string> v(a+1);
    string res="0";v[0]="1";
    for(int i=1;i<=a;i++){
        v[i]=multiply(v[i-1],to_string(i));
        res=add(res,v[i]);
    }
    cout<<res;
    return 0;
}