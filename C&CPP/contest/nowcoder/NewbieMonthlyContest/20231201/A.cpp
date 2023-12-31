#include<bits/stdc++.h>
using namespace std;
bool is(int a){
    if(a<2)return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;;i++){
        if(is(i)&&!is(i+n)){
            cout<<i;
            break;
        }
    }
}