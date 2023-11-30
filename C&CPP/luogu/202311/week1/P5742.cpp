#include<bits/stdc++.h>
using namespace std;
int main(){
    typedef struct s{
        int a,b,c;
    } S;
    int N,d,e,f,ans[1000]={0};
    cin>>N;
    vector<S> s(N);
    for(int i=0;i<N;i++){
        cin>>d>>e>>f;
        if(e+f>140&&e*7+f*3>=800){
            ans[i]=1;
        }
    }
    for(int i=0;i<N;i++){
        if(ans[i]==1)cout<<"Excellent"<<endl;
        else{cout<<"Not excellent"<<endl;}
    }
    return 0;
}