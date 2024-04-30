#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
string Multiply(string a,string b){
    int la[101]={0},lb[101]={0},lc[202]={0},len=a.length()+b.length();
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
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string a,b,c,d;
        cin>>a>>b;
        if(a.length()==1){
            cout<<a<<endl<<b<<endl;
            continue;
        }
        string ans=Multiply(a,b);
        for(int i=0;i<a.length();i++){
            swap(a[i],b[i]);
            string res=Multiply(a,b);
            if(res>ans){
                ans=res;
                c=a,d=b;
            }else{
                swap(a[i],b[i]);
            }
        }
        cout<<c<<endl<<d<<endl;
    }
    return 0;
}