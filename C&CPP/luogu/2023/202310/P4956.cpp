#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,k,n;
    cin>>n;
    n/=52;
    for(int i=(n/7-1)>100?100:(n/7-1);i>=1;i--){
        if((n-7*i)%21==0){
            cout<<i<<endl<<(n-7*i)/21;
            break;
        }
    }
    return 0;
}