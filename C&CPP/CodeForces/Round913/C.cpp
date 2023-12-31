#include<bits/stdc++.h>
using namespace std;
pair<int,int> maxlen(string str){
    pair<int,int> pa(0,0);
    if(str.length()==1)return pa;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]=str[i+1]){
            int p=i,q=i;
            while((q+1<str.length())&&str[q]==str[q+1]){
                q++;
            }
            if(q-p>(pa.second-pa.first)){
                pa.first=p,pa.second=q;
            }
        }
    }
    return pa;
}
string dg(string str){
    if(maxlen(str).second==0&&maxlen(str).first==0){
        if(str.length()%2==0)cout<<0<<endl;
        else cout<<1<<endl;
        return "";
    }else if(maxlen(str).second-maxlen(str).first+1==str.length()){
        cout<<str.length()<<endl;
        return "";
    }
    pair<int,int> pa=maxlen(str);
    if(pa.second+1<str.length()&&str[pa.second]!=str[pa.second+1]){
        str.replace(pa.second,2,"");
    }
    if(pa.first-1>0&&str[pa.first]!=str[pa.first-1]){
        str.replace(pa.first-1,2,"");
    }
    dg(str);
    return "";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int len;string s;
        cin>>len>>s;
        dg(s);
    }
    return 0;
}