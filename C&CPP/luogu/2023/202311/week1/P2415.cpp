#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t=0;
    long long sum=0;
    while(cin>>i){
        sum+=i;
        t++;
    }
    cout<<(1<<(t-1))*sum;
    return 0;
}