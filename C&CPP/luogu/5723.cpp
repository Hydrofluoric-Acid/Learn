#include<bits/stdc++.h>
using namespace std;
bool is_primer(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int L,c=0,sum=0;
    cin>>L;
    for(int i=2;i<=L;i++){
        
        if(is_primer(i)){
            sum+=i;
            if(sum>L){
            break;
        }
            cout<<i<<endl;
            c++;
            
        }
        
    }
    cout<<c;
    return 0;
}