#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a%b==0)return b;
    else return gcd(b,a%b);
}
int main(){
    int ans=0,x,y;
    cin>>x>>y;
    long long k=x*y;
    for(int i=1;i*i<=k;i++){
        if(k%i==0&&gcd(i,k/i)==x){
            ans+=2;
            if(i==k/i)ans--;
        }
    }
    cout<<ans;
    return 0;
}