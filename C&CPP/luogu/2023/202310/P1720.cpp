#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double fab[48]={1.00,1.00};
   if(n==0){printf("0.00");return 0;}
    if(n<=2){
        printf("%.2f",1.00);
        return 0;
    }
    for(int i=2;i<n;i++){
        fab[i]=fab[i-1]+fab[i-2];
    }
    printf("%.2f",fab[n-1]);
    return 0;
}