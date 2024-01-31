#include<iostream>
using namespace std;
string multiply(string a,string b){
    int la[2600]={0},lb[2600]={0},lc[5200]={0},len=a.length()+b.length();
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
        res+=lc[i]+'0';
    }
    return res;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;char c;
        cin>>k>>c;
        string res="1";int ans=0;
        for(int i=1;i<=k;i++){
            res=multiply(res,to_string(i));
        }
        for(int i=0;i<res.length();i++){
            if(res[i]==c)ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}