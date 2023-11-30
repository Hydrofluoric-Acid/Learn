#include<iostream>
using namespace std;
int main(){
    int a[2000]={6},n,b[10]={6,2,5,5,4,5,6,3,7,6},tmp,ans=0;
    cin>>n;
    for(int i=1;i<2000;i++){
        tmp=i;
        while(tmp>0){
            a[i]+=b[tmp%10];
            tmp/=10;
        }
    }
    for(int i=0;i<2000;i++){
        for(int j=0;j<2000;j++){
            if(a[i]+a[j]+a[i+j]+4==n){
                ans++;
            }
        }
    }
    cout<<ans;
}