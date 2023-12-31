#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char c;int d;
        cin>>c>>d;
        for(int i=1;i<=8;i++){
            if(i!=d)cout<<c<<i<<endl;
        }
        for(int i=0;i<8;i++){
            if('a'+i!=c)cout<<(char)('a'+i)<<d<<endl;
        }
    }
    return 0;
}