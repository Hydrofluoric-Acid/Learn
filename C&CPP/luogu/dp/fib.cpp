#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int nums[10100]={0,1,1},f[10100]={0};
LL fib1(int n){
    if(n==0)return 0;
    if(n==2||n==1)return 1;
    return fib1(n-1)+fib1(n-2);
}
LL fib2(int n){
    if(n==0)return 0;
    if(nums[n]!=0)return nums[n];
    int a1=fib2(n-1),a2=fib2(n-2);
    nums[n]=a1+a2;
    return a1+a2;
}
LL fib3(int n){
    f[0]=0,f[1]=f[2]=1;
    for(int i=3;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}
int main(){
    int n;
    cin>>n;
    cout<<fib1(n)<<endl;
    cout<<fib2(n)<<endl;
    cout<<fib3(n)<<endl;
    return 0;
}