#include<bits/stdc++.h>
using namespace std;
int main(){
    double s=0,step=2.0,t=0;
    int count=0;
    cin>>s;
    while(t<s){
        t+=step;
        step=step*98/100.0;
        count++;
    }
    
    cout<<count;
    return 0;
}