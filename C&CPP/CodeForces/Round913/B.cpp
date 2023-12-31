#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<int> up,low;
        vector<int> v(s.length(),0);
        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z'&&s[i]!='B'){
                up.push(i);
            }else if(s[i]>='a'&&s[i]<='z'&&s[i]!='b'){
                low.push(i);
            }else if((s[i]=='b')){
                v[i]=1;
                if(!low.empty()){
                    int k=low.top();
                v[k]=1;
                low.pop();
                }
                
            }else if((s[i]=='B')){
                v[i]=1;
                if(!up.empty()){
                    int k=up.top();
                v[k]=1;
                up.pop();
                }
                
            }
        }
        string res="";
        for(int i=0;i<s.length();i++){
            if(v[i]==0&&s[i]!='b'&&s[i]!='B')res+=s[i];
        }
        cout<<res<<endl;
    }
    return 0;
}