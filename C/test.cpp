#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int temp=n%7+x;
    if(temp<6&&temp>0){
        cout<<(n-n/7*2+1)*250;
    }else if (temp>5&&temp<8){
        cout<<(n-(temp-5)-(n/7*2)+1)*250;
    }else{
        cout<<(n-(n/7*2)-(temp-2)+1)*250;
    }
    
    return 0;
}