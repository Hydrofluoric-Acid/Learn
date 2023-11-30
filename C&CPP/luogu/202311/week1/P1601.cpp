#include<bits/stdc++.h>
using namespace std;
int main(){
    string A,B;
    cin>>A>>B;
    int a[500]={0},b[500]={0},ans[501]={0},len=max(A.length(),B.length());
    for(int i=0;i<A.length();i++){
        a[i]=A[A.length()-i-1]-'0';
    }
    for(int i=0;i<B.length();i++){
        b[i]=B[B.length()-i-1]-'0';
    }
    for(int i=0;i<len;i++){
        ans[i]+=a[i]+b[i];
        ans[i+1]=ans[i]/10;
        ans[i]%=10;
    }
    if(ans[len]!=0){
        len++;
    }
    for(int i=len-1;i>=0;i--){
        cout<<ans[i];
    }
    return 0;
}