#include<iostream>
using namespace std;
string add(int a,int b){
    string sa=to_string(a),sb=to_string(b);
    int La[500]={0},Lb[500]={0},Lc[501]={0},len=max(sa.length(),sb.length());
    for(int i=sa.length()-1,j=0;i>=0;i--){
        La[j++]=sa[i]-'0';
    }
    for(int i=sb.length()-1,j=0;i>=0;i--){
        Lb[j++]=sb[i]-'0';
    }
    for(int i=0;i<len;i++){
        Lc[i]+=La[i]+Lb[i];
        Lc[i+1]+=Lc[i]/10;
        Lc[i]%=10;
    }
    string ans="";
    if(Lc[len+1])len++;
    for(int i=len-1;i>=0;i--){
        ans += Lc[i] + '0';
    }
    return ans;
}
int main(){
    cout<<add(1236,1239)<<endl;
    return 0;
}