#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a[30],n,r;
    cin>>n>>r;
    for(int i=(1<<n)-1;i>=0;i--){
        int cnt=0;
        for(int j=0;j<n;j++){
            if((i>>j)&1){
                a[cnt++]=j;
            }
        }
        if(cnt==r){
            for(int j=r-1;j>=0;j--){
                printf("%3d",n-a[j]);
            }
            cout<<endl;
        }
    }
    return 0;
}