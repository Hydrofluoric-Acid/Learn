#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,day=0,coin=0;
    cin>>k;
    for(int i=0;;i++){
        for(int j=0;j<i;j++){
            coin+=i;day++;
            if(day==k){
                cout<<coin;
                return 0;
            }
        }
    }
}