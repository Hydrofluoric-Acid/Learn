#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,a[9];
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i-1]=i;
    }
    do{
        for(int i=0;i<n;i++){
            printf("%5d",a[i]);
        }
        cout<<endl;
    }while(next_permutation(a,a+n));
    return 0;
}