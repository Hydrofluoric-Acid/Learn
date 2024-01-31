#include<bits/stdc++.h>
using namespace std;
int main(){
    int M,N,tmp,ans[10]={0},k;
    cin>>M>>N;
    for(int i=M;i<=N;i++){
        tmp=i;
        while(tmp!=0){
            k=tmp%10;
            ans[k]++;
            tmp/=10;
        }
    }
    for(int i=0;i<10;i++){
        cout<<ans[i];
        if(i!=9)cout<<" ";
    }
    return 0;
}