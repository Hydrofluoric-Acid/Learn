#include<iostream>
using namespace std;
int main(){
    int a[5]={5,4,3,2,1};
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(a[j]>a[j+1]){
                int p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
        for(int k=0;k<5;k++){
        cout<<a[k];    
        }
        cout<<endl;
    }
    }
}