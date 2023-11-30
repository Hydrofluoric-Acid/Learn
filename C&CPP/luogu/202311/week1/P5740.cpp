#include<bits/stdc++.h>
using namespace std;
int main(){
    struct S{
        string name;
        int ch,math,en;
    }a,ans;
    int N,t=-1;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a.name>>a.ch>>a.math>>a.en;
        if(a.ch+a.math+a.en>t){
            t=a.ch+a.math+a.en;
            ans=a;
        }
    }
    printf("%s %d %d %d",ans.name.c_str(),ans.ch,ans.math,ans.en);
    return 0;
}