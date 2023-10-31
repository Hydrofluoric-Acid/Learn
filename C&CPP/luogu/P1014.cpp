#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,sum=0,i=1,tmp,a=1,b=1;
    cin>>N;
    while(true){
        sum+=(i++);
        if(sum==N){
            tmp=i-1;
            if(tmp%2==0){
                a=tmp;
                
            }else{
                b=tmp;
            }break;
        }
        if(sum>N){
            tmp=sum-i+1;
            if((i-1)%2==0){
                a=N-tmp;
                b=i-a;
                
            }else{
                b=N-tmp;
                a=i-b;
                }
                break;
        }
    }
    cout<<a<<"/"<<b;
    return 0;
}