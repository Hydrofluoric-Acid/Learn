#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[2000],b[2000],ans[4000];
    string A,B;
    cin>>A>>B;
    int len_a=A.length(),len_b=B.length();
    for(int i=0;i<len_a;i++){
        a[i]=A[len_a-1-i]-'0';
    }
    for(int i=0;i<len_b;i++){
        b[i]=B[len_b-i-1]-'0';
    }
    for(int i=0;i<len_a;i++){
        for(int j=0;j<len_b;j++){
            ans[i+j]+=a[i]*b[j];
        }
    }
    int len=len_a+len_b;
    for(int i=0;i<len;i++){
        ans[i+1]+=ans[i]/10;
        ans[i]%=10;
    }
    for(;!ans[len-1];){len--;}
    if(len == 0) {
        cout << 0;
    } else {
        for(int i=len-1;i>=0;i--){
            cout<<ans[i];
        }
    }
    return 0;
}