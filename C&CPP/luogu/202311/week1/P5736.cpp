#include<bits/stdc++.h>
using namespace std;
bool is_prime(int a){
    if(a==1)return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,a[100]={0},tmp,index=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(is_prime(tmp)){
            a[index++]=tmp;
    }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(a[i+1]==0){break;}
    }
    return 0;
}