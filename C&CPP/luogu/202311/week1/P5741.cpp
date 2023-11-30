#include<bits/stdc++.h>
using namespace std;
int main(){
     typedef struct s{
        string name;
        int ch,math,en;
    }S;
    
    int N;
    cin>>N;
    cin.ignore();
    vector<S> s(N);
    for(int i=0;i<N;i++){
        cin>>s[i].name>>s[i].ch>>s[i].math>>s[i].en;
        cin.ignore();
    }
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(abs(s[i].ch-s[j].ch)<=5&&abs(s[i].math-s[j].math)<=5&&
               abs(s[i].en-s[j].en)<=5&&abs(s[i].ch+s[i].math+s[i].en-s[j].ch-s[j].math-s[j].en)<=10){
                if(s[i].name<s[j].name){
                    cout<<s[i].name<<" "<<s[j].name<<endl;
                }else{
                    cout<<s[j].name<<" "<<s[i].name<<endl;
                }
               }
        }
    }
}