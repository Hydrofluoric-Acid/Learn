#include<bits/stdc++.h>
using namespace std;
string s[1000],t;
int n,q,a;
bool cmp(string a,string b){
    if(a.length()!=b.length()){
        return a.length()<b.length();
    }
    return a<b;
}
string find(int a,string t,int j){
    for(int i=1;i<=a;i++){
        if(s[j][s[j].length()-i]!=t[t.length()-i]){
            return "-1";
        }
    }
    return s[j];
}
int main(){
    cin>>n>>q;
    for(int i=0;i<n;i++)cin>>s[i];
    sort(s,s+n,cmp);
    for(int i=0;i<q;i++){
        cin>>a>>t;
        for(int j=0;j<n;j++){
            if(find(a,t,j)=="-1"){
                if(j!=n-1){
                    continue;
                }else{
                    cout<<"-1"<<endl;
                }  
            }else{
                cout<<find(a,t,j)<<endl;
                break;
            }
        }
    }
}