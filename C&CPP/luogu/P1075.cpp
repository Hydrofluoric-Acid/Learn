/* #include<bits/stdc++.h>
using namespace std;
bool is_prime(int &n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,ans1,ans2;
    cin>>n;
     for(int i=2;i*i<=n;i++){
        if(is_prime(i)&&n%i==0){
            cout<<max(i,n/i);
        }
        
    } //33ms 808kb
    
    return 0;
} */
#include<cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            printf("%d",n/i);
        }
    }
    return 0;//33ms 707ms
}