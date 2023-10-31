#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n*n;i++){
        printf("%02d",i);
        if(i%n==0){
            printf("\n");
        }
    }
    printf("\n");
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("%02d",a++);
        }
            printf("\n");
    }
    return 0;
}